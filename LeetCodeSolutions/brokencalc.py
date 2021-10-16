class Solution:
    def brokenCalc(self, X: int, Y: int) -> int:
	    ops = 0
	    while Y > X:
		    if Y & 1: Y += 1
		    else : Y //= 2
		    ops += 1
	    return ops + X - Y

        
