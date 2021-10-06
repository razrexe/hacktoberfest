class Solution(object):
    def plusOne(self, digits):
        l = len(digits)
        sum = 1
        
        for i in range(l):            
            sum += digits[i]*(10**(l-i-1))       
        finalv = []     
        
        while sum>0:
            s = sum%10
            sum = sum//10
            finalv.insert(0,s)     
        
        if digits[0] == 0 and len(digits)>1:
            i = 0
            while digits[i] == 0 and i < l-1:
                finalv.insert(i,0)
                i += 1
            if digits[l-1] != 9:
                return finalv
            else:
                return finalv[1:]
        else:
            return finalv
