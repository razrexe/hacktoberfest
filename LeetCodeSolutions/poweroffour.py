class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n<=0:
                return False
        while(n!=1):
                a=n%4
                if a!=0:
                    return False
                
                n/=4
        return True    
                
               
