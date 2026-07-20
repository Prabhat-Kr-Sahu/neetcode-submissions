class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return  0;
        int curr = 1;
        int ans= 0;
        set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        nums.clear();
        for(int i : s){
            nums.push_back(i);
        }
        // sort(nums.begin() , nums.end());
        
        int ele = nums[0];
        
        int n = nums.size();
        for(int i = 1; i< n ; i++){
            if(nums[i] == ele+1){
                curr++;
                ele++;
            }
            else{
                ans= max(ans, curr);
                ele = nums[i];
                curr = 1;
            }
        }
        ans =max(curr, ans);
        return ans;
    }
};
