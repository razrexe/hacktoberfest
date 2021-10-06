class Solution:
    def myPow(self, x: float, n: int) -> float:
        sign = 1
        if n < 0:
            sign = -1
            n = -n
        
        n_left = n
        res = 1
        while n_left > 0:
            npow = 1
            val = x
            while npow + npow <= n_left:
                val = val * val
                npow = npow + npow
                print(npow, n)
            n_left = n_left - npow
            res = res*val
        
        if sign == -1:
            return 1/res
        else:
            return res
