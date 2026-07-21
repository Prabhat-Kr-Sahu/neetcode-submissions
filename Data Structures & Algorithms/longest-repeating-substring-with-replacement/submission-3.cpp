class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int,int> f;
        int ans= 0;
        int l = 0 , maxf = 0;
        int n = s.size();
        for(int i = 0 ; i< n ; i++){
            f[s[i]]++;
            maxf = max(maxf, f[s[i]]);
            while( i - l +1 - maxf > k ){

                f[s[l]]--;
                l++;
                
            }
            ans = max(ans, i - l +1);
        }
        return ans;
    }
};