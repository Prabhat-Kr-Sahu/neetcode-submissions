class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> d;
        for(int i = 0 ; i< n ; i++){
            d.push_back(make_pair(position[i], speed[i]));
        }
        sort(d.rbegin() , d.rend() );
        vector<double> s;
        for(int  i = 0; i< n ; i++){
            double t = ((double)(target - d[i].first ) / d[i].second);
            s.push_back(t);
            if(s.size() >= 2  && s.back()  <=  s[s.size() -2 ]){
                s.pop_back();
            }
           
        }
        return s.size();
    }
};
