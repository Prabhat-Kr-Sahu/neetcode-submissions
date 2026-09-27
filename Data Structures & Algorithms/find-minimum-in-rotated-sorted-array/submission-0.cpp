class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();

        int s = 0;
        int e = nums.size()-1;
        while(s < e){
            int m = s + (e -s)/2;
            if( nums[m] >= nums[s] && nums[m ] <= nums[e]){
                e = m-1;
            }
            else if(nums[m] <= nums[s] && nums[m] >= nums[e]){
                s = m+1;
            }
            else if(nums[m] >= nums[s] && nums[m] >= nums[e]){
                s = m+1;
            }
            else{
                e = m;
            }
        }
        return nums[s];
    }
};
