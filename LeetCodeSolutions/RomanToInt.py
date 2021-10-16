class Solution:
    def romanToInt(self, s: str) -> int:
        d = {
            'I': 1, 
            'V': 5, 
            'X': 10, 
            'L': 50, 
            'C': 100, 
            'D': 500, 
            'M': 1000,
        }
        r = 0
        l = d['M']
        for c in s:
            n = d[c]
            r += n
            if l < n:
                r -= l*2
            
            l = n
        return r
    
