class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i  : nums){
            mp[i]++;
        }
        priority_queue<vector<int>>  a;
        for(auto [ i, f] : mp){
            a.push({f, i});
        }
        vector<int> ans;
        while(!a.empty( ) && k--){
            auto d = a.top();
            a.pop();
            ans.push_back(d[1]);
        }
        return ans;
    }
};
