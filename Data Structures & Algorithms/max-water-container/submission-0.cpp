class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n - 1;
        int maxh = max(heights[l], heights[r]);
        int ans = 0;
        while (l < r) {
            int minm = min(heights[l], heights[r]);
            int area = minm * (r - l );
            ans = max(area , ans);
            if(minm == heights[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};
