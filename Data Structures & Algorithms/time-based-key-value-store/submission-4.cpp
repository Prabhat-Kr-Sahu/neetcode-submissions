class TimeMap {
    map<string, string> mp;
    map<string, set<int>> f;

public:
    TimeMap() {
        mp.clear();
        f.clear();
    }

    void set(string key, string value, int timestamp) {
        string n = to_string(timestamp);
        f[key].insert(timestamp);
        key = key + n;
        mp[key] = value;
    }

    string get(string key, int timestamp) {
        // If the key doesn't exist at all, return ""
        if (f.find(key) == f.end()) {
            return "";
        }
        
        // Use the set's built-in upper_bound for O(log N) performance
        auto it = f[key].upper_bound(timestamp);
        
        // If 'it' is at the beginning, all timestamps are strictly greater than target
        if (it == f[key].begin()) {
            return "";
        }
        
        // Otherwise, step back by one to get the largest timestamp <= target
        --it;
        int ts = *it;
        
        // Retrieve and return the value
        string keyy = key + to_string(ts);
        return mp[keyy];
    }
};