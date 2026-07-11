class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i : nums){
            if(s.count(i) == 0){
                s.insert(i);
            }
            else{
                return true;
            }
        }
        s.clear();
        return false;
    }
};