class Solution {
public:
 void setZeroes(vector<vector<int>>& matrix) {    
     
     
     
     // approach
     // make 2 dummy arrays for rows and columns initialised to ones
    
        int r=matrix.size(); 
        int c=matrix[0].size(); 
        vector<int>row(r,1);
        vector<int>col(c,1); 
        // traverse the matrix

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
             // if an element is zero, fix the value of the corresponding coordinates(dummy array) as zero
                if(matrix[i][j]==0)
                {
                    row[i]=0; 
                    col[j]=0;
                }
            }
        } 
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                // traverse the dummy, if either of the coordinate is zero, set matrix to zero
                if(row[i]==0 || col[j]==0)
                    matrix[i][j]=0;
             }
        }
        
    }
};
