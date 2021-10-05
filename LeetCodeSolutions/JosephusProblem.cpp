class Solution {
public:
    int findTheWinner(int n, int k) {
        return helper(n,k)+1;
    }
    int helper(int n,int k)
    {
        if(n==1)
            return 0;
        int y = helper(n-1,k);  
        int x = (y+k)%n;
        return x;
    }
};
