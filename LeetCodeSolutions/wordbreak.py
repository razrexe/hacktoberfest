class Solution(object):
    def wordBreak(self, s, wordDict):
        dp = [False] * (len(s)+1)
        dp[0] = True
        for i in xrange(1, len(s)+1):
            for j in xrange(i):
                if dp[j] and s[j:i] in wordDict:
                    dp[i] = True
                    break
        return dp[-1]
