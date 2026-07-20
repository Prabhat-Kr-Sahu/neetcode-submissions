class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int t = nums[i];
            int l = i+1, r = n - 1;
            while (l < r) {
                int sum  = t + nums[l] + nums[r];
                if (sum == 0) {
                    // cout<< l << " " << r << " "<< t <<endl;
                    ans.push_back({nums[l], nums[r], t});
                    l++; 
                    r--;
                    while(l< r && nums[l] == nums[l-1]){
                        l++;
                    } 

                } else if (sum > 0 ) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        
        return ans;
    }
};
