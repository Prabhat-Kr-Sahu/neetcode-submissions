class TimeMap {
    unordered_map<string, string> mp;
    unordered_map<string, set<int>> f;

   public:
    TimeMap() {
        mp.clear();
        f.clear();
    }

    void set(string key, string value, int timestamp) {
        // cout<<" ddd "<<endl;
        string n = to_string(timestamp);
        f[key].insert(timestamp);
        key = key + n;
        mp[key] = value;
    }

    string get(string key, int timestamp) {
        if (f.find(key) == f.end()) {
            return "";
        }
        auto it = f[key].upper_bound(timestamp);
        

        if (it == f[key].begin()) {
            return "";
        }
        it--;
        int ts = *it;

        string keyy = key + to_string(ts);

        return mp[keyy];
    }
};
