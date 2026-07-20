class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long pr = 1;
        int g = 0;
        for (int i : nums) {
            if (i == 0) {
                g++;
            } else {
                pr *= i;
            }
        }
        vector<int> ans;
        for (int i : nums) {
            if (g > 1 || (g == 1 && i != 0)) {
                ans.push_back(0);
            } else if (g == 1 && i == 0) {
                ans.push_back(pr);
            } else {
                ans.push_back(pr / i);
            }
        }
        return ans;
    }
};
