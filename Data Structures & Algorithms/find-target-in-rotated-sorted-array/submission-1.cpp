class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n = nums.size();
        int s = 0 ;
        int e = n-1;
        while(s <= e){
            int  m = s+ +( e -s)/2;
            if( nums[m] == t){
                return m;
            }
            if(nums[s] <= nums[m]){
                if(t > nums[m] || t < nums[s]){
                    s = m+1;
                }
                else{
                    e = m -1;
                }
            }
            else{
                if(t < nums[m] || t > nums[e]){
                    e = m-1;
                }
                else s = m +1;
            }
        }
        return -1;
    }
};
