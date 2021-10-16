class Solution {
public:
    long CalculateCoeff(int n,int k)  
    {
        long res=1;
        if(k>n-k)
            k=n-k;                     
        for(int i=0;i<k;i++)
        {
            res*=(n-i);
            res/=(i+1);
        }
        return res;
    }
    int numTrees(int n) {
        return CalculateCoeff(2*n,n)/(n+1);
    }
};
