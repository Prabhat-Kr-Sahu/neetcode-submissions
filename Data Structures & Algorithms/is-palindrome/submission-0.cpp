class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1 ) return true;
        int  n = s.size();
       
        string ss = "";
        for(char& i : s ){
            if( isalnum(i)){
            
                ss = ss+ (char)tolower(i);
            }
        }
        cout<<ss <<endl;
        int l = 0, r =ss.size() -1;
        while(l < r){
            if(ss[l] == ss[r]){
                l++;
                r--;
            }
            else{
                cout<< ss[l] << " " <<ss[r] << " " << l << " " <<r <<endl;
                return  false;
            }
        }
        return true;
    }
};
