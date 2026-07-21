class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int  n = s.size();
        int l = 0;
        set<char> st;
        int ans = 1;
        for(int i = 0; i< n ; i++){
            if(st.count(s[i]) == 0){
                st.insert(s[i]);
                ans = max(ans, i - l +1 );
            }
            else{
                while(s[l] != s[i]){
                    st.erase(s[l]);
                    l++;
                }
                l++;
            }
        }
        return ans;
    }
};
