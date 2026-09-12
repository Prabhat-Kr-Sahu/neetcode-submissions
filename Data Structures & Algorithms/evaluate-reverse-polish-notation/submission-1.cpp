class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int n = tokens.size();
        if(n == 0) return 0;
        stack<int> s;
        for(int i = 0; i< n ; i++){
            if( tokens[i] == "*" || tokens[i] == "+" || tokens[i] == "/" || tokens[i] == "-" ){
                int ans= 0;
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();
                if(tokens[i] == "*"){
                    s.push(n1 * n2);
                }
                else if(tokens[i] == "+"){
                    s.push(n1  + n2);
                }
                else if(tokens[i] == "/"){
                    s.push(n1/n2);
                }
                else{
                    s.push(n1 - n2);
                }
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
