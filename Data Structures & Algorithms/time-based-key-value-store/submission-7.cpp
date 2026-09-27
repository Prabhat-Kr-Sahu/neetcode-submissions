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
        auto it = upper_bound(f[key].begin(), f[key].end(), timestamp);
        int ts;

        if (it == f[key].begin()) {
            return "";
        }
        it--;
        ts = *it;

        string keyy = key + to_string(ts);

        return mp[keyy];
    }
};
