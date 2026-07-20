class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans= 0 ;
        int curr = 0;
        int lmax = 0;
        for(int i = 0 ; i< n ; i++){
            if(height[i] >= lmax){
                ans+= curr;
                curr = 0;
                lmax = height[i];
            }
            else{
                curr += (lmax - height[i]);
            }
        }
        int hmax = 0;
        int j = n-1;
        curr  = 0;
        while(hmax < lmax){
            if(height[j] >= hmax){
                ans+= curr;
                curr = 0;
                hmax = height[j];
            }
            else{
                curr += (hmax - height[j]);
            }
            j--;
        }
        return ans;
    }
};
