class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        vector<set<int>> rs(n), cs(m), sqs(9);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] != '.') {
                    if (rs[i].count(board[i][j]) == 0 &&
                        cs[j].count(board[i][j]) == 0 &&
                        sqs[(i / 3) * 3 + j / 3].count(board[i][j]) == 0) {
                                sqs[ (i/3) * 3 + j/3].insert(board[i][j]);
                                rs[i].insert(board[i][j]);
                                cs[j].insert(board[i][j]);
                    }else{
                        return false;
                    }
                }
                
            }
        }
        return true;
    }
};
