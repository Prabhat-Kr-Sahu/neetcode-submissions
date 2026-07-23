class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> ms;
        int l = 0;
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            if( i - l + 1 <= k){
                ms.insert(nums[i]);
            }
            else{
                ans.push_back(*prev(ms.end()));
                auto it = ms.find(nums[l]);
                l++;
                ms.erase(it);
                // cout<<ms.size() <<endl;
                ms.insert(nums[i]);
            }
        }
        ans.push_back(*prev(ms.end()));
        return ans;
    }
};
