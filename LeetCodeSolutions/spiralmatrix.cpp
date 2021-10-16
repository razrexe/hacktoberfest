class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> v;
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        
        while(left<=right && top<=bottom)
        {

        for(int i=left; i<=right && left<=right && top<=bottom; i++)
            v.push_back(matrix[top][i]);
        top++;
        for(int i=top; i<=bottom && left<=right && top<=bottom; i++)
            v.push_back(matrix[i][right]);
        right--;
        for(int i=right; i>=left && left<=right && top<=bottom; i--)
            v.push_back(matrix[bottom][i]);
        bottom--;
        for(int j=bottom; j>=top && left<=right && top<=bottom; j--)
            v.push_back(matrix[j][left]);
        left++;
            
        
        
        }
        return v;
        
    }
};
