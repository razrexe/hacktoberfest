class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
         vector<vector<int>> result(n, vector<int>(n));
                int level = ceil(n / 2), count = 1;
        
        for (int l = 0; l <= level; ++l) 
        {
             for (int a = l; a < n - l; ++a) result[l][a] = count++;
                        for (int b = l + 1; b < n - l; ++b) result[b][n - l - 1] = count++;
                        for (int c = l + 1; c < n - l; ++c) result[n - l - 1][n - c - 1] = count++;
                        for (int d = l + 1; d < n - l - 1; ++d) result[n - d - 1][l] = count++;
        }
        
        return result;
    }
};
