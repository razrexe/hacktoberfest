class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend >= 0 and divisor >= 0 or (dividend < 0 and divisor < 0):
            sign = 1
        else:
            sign = -1
        
		# some shortcuts
        if divisor == -1 and dividend == -2147483648:
            return 2147483647
        elif divisor == 1:
            return abs(dividend) if sign == 1 else -abs(dividend)
        
        divisor = abs(divisor)
        dividend = abs(dividend)
        
        if dividend < divisor:
            return 0
        
        d = divisor
        q = 1
        rq = 0
        while True:
            t = divisor << 1
            if dividend >= t:
                divisor = t
                q += q
            else:
                rq += q
                q = 1
                dividend -= divisor
                divisor = d
                if (divisor << 1) > dividend:
                    if dividend >= divisor:
                        rq += 1
                    break

        return rq if sign == 1 else -rq
