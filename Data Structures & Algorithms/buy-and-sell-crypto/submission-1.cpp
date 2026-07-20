class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  n = prices.size(); 
        vector<vector<int>> dp(n , vector<int> ( 3, -1));
        function<int(int, int)> f = [&](int idx ,int b){
            if(idx == n){
                return 0;
            }
            if(dp[idx][b] != -1) return dp[idx][b];
            if(b == 1){
                int skip = f(idx +1 , b);

                int sell = prices[idx] + f(idx+1, 2);
                return  max(sell , skip);
            }
            else if(b == 0){
                int skip = f(idx+1, b);
                int buy = -prices[idx] + f(idx +1, 1);
                return max(buy, skip );
            }else{
                return 0;
            }
        };
        return  f(0,0);
    }
};
