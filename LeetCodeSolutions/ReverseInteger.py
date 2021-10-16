class Solution:
    def reverse(self, x: int) -> int:
        total=0
        absx=abs(x)
        count=len(str(absx))-1
        while absx!=0:
            temp=absx%10
            total=total+temp*(10**(count))
            count-=1
            absx=(absx-temp)/10
        if total >= 2**31-1:
            return 0
        if x<0:
            return int((-1)*total)
        else:
            return int(total)
