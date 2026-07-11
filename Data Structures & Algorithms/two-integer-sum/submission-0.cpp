class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int j = 0;
        for(int i: nums){
            if( mp.find(target - i) != mp.end() ){
                return {mp[target - i ] , j};                
            }
            else{
                mp[i] = j;
            }
            j++;
        }
        return  {};
    }
};
