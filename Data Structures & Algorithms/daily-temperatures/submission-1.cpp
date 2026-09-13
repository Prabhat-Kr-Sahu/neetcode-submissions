class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<pair<int, int>> s;
        vector<int> ans(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            if (s.empty()) {
                s.push(make_pair(t[i], i));
            } else {
                while (!s.empty()) {
                    if (s.top().first <= t[i]) {
                        s.pop();
                    }
                    else break;
                }
                if (!s.empty()) {
                    ans[i] = s.top().second - i;
                } 
                s.push(make_pair(t[i], i ));
            }
        }
        return ans;
    }
};
