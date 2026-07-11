class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int n = s.size();
        vector<int> w1(26), w2(26);
        for(auto c : s){
            w1[c-'a']++;
        }
        for(auto c: t){
            w2[c-'a']++;
        }

        for(int i =0;  i< 26 ; i++){
            if( w1[i] != w2[i]) return false;
        }
        
        return true;
    }
};
