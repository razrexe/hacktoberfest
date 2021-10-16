class Solution(object):
    def kthFactor(self, n, k):
        res= []
        for i in range(1,n+1):
            if n%i==0:
                res.append(i)
                if len(res)==k:
                    break
        return res[-1] if len(res)==k else -1
