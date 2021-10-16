class Solution {
public:
    int combinationSum4(vector<int>& N, int T) 
    {
        vector<unsigned int> dp(T+1, 0);
        dp[0] = 1;
        for (int i = 0; i < T; i++) 
        {
            if (!dp[i]) continue;
            for (int num : N)
                if (num + i <= T) 
                    dp[i+num] += dp[i];
        }
        return dp[T];
    }
};
