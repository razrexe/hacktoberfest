class Solution {
   public:
   int numSubmatrixSumTarget(vector<vector<int>>& matrix, int
   target) {
      int ans = 0;
      int col = matrix[0].size();
      int row = matrix.size();
      for(int i = 0; i < row; i++){
         for(int j = 1; j < col; j++){
            matrix[i][j] += matrix[i][j - 1];
         }
      }
      unordered_map <int, int> m;
      for(int i = 0; i < col; i++){
         for(int j = i; j < col; j++){
            m.clear();
            m[0] = 1;
            int sum = 0;
            for(int k = 0; k < row; k++){
               int current = matrix[k][j];
               if(i - 1 >= 0)current -= matrix[k][i - 1];
               sum += current;
               ans += m[target - sum];
               m[-sum]++;
            }
         }
      }
      return ans;
   }
};
