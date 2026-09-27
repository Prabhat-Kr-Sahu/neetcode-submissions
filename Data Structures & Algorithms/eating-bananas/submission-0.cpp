class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        function<long long (int)> f = [&](int k ){
            long long ans = 0;
            for(int i = 0; i< n ; i++  ){
                ans = ans + (piles[i] / k) + (piles[i] % k == 0 ? 0: 1 );
            }
            return ans;
        };

        int s = 1 ;
        int e = *max_element(piles.begin() , piles.end()) + 1;
        while(s < e){
            int mid  =  s+ ( e -s )/2;
            if( f(mid) <= 1ll* h){
                e = mid;
            }
            else{
                s = mid+ 1;
            }
        }
        return s;
    }
};
