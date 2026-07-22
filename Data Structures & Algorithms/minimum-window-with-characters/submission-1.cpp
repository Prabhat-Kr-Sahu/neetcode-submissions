class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        map<char ,int > f;
        for(auto i :t ){
            f[i]++;
        }
        int need = t.size();
        int start = 0 , len = INT_MAX , l = 0;
        for(int i = 0; i< n ; i++){
            if(f[s[i]] > 0) need--;
            f[s[i]]--;

            while(need == 0){
                if(len > i - l +1){
                    start = l;
                    len = i - l +1;
                }
                // f[s[l]]++;
                if(f[s[l]]++ >= 0){
                    // f[s[l]]++;
                    need++;
                }
                l++;
            }
        }
        return len == INT_MAX? ""  : s.substr(start , len );
    }
};
