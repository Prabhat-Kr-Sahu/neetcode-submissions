class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        vector<int> f(26, 0);
        for (auto i : s1) {
            f[i - 'a']++;
        }
        int l = 0;
        vector<int> f1(26, 0);
        for (int i = 0; i < n; i++) {
            if (i - l < s1.size()) {
                f1[s2[i] - 'a']++;
            } else {
                bool flag = true;
                for (int j = 0; j < 26; j++) {
                    if (f1[j] != f[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    return true;
                }
                f1[s2[l] - 'a']--;
                f1[s2[i] - 'a']++;
                l++;
            }
        }
        bool flag = true;
        for (int j = 0; j < 26; j++) {
            if (f1[j] != f[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return true;
        }
        return false;
    }
};
