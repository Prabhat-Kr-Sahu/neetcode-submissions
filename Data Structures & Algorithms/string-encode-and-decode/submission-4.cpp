class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        int  n = strs.size();
        for(int i =0; i< n ; i++){
            // cout<< strs[i] << "   ";
            string kk = to_string(strs[i].size())+ "/:" + strs[i] ;
            cout<< kk << "  ";
            s = s+ kk;
        }
        cout<<endl;
        cout << s <<endl;
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i = 0 ; i< s.size() ; i++){
            int size = s[i] - '0';
            i++;
            while(s[i]  != '/'){
                size = size*10 + (s[i]-'0');
                i++;
            }
            i++;
            // if(size > 0 ) i++;
            string k = "";
            while(size--){
                i++;
                k= k+ s[i];
                
            }
           
            ans.push_back(k);
        }
        return ans;
    }
};
