class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> temp(n, string(n, '.'));
        solveNQueens(result, temp, 0, n);
        return result;
    }
    void solveNQueens(vector<vector<string>> &result, vector<string> &temp, int cur_row, int left) {
         if(cur_row == temp.size()) {
            if(left == 0) {
                result.push_back(temp);
            }
            return;
        }
         for(int col = 0; col < temp.size(); ++col) {
            if(helper(temp, cur_row, col)) {
                temp[cur_row][col] = 'Q';
                solveNQueens(result, temp, cur_row+1, left-1);
                temp[cur_row][col] = '.';
            }
        }
         return;
    }
    bool helper(vector<string> &temp, int row, int col) {
         for(int i = 0; i < row; ++i) {
            if(temp[i][col] == 'Q') {
                return false;
            }
        }
         for(int i = 0; i < col; ++i) {
            if(temp[row][i] == 'Q') {
                return false;
            }
        }
         int r = row-1, c = col-1;
        while(r >= 0 && c >= 0) {
            if(temp[r--][c--] == 'Q') return false;
        }
         r = row-1, c = col+1;
        while(r >= 0 && c < temp.size()) {
            if(temp[r--][c++] == 'Q') return false;
        }
        return true;
    }
};
