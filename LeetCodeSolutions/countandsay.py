class Solution:
    def countAndSay(self, n: int) -> str:
        s='1'
        for i in range(n-1):
            c=1
            res=""
            for j in range(1,len(s)):
                if s[j]==s[j-1]:
                    c+=1
                else:
                    res+=str(c)
                    res+=str(s[j-1])
                    c=1
            res+=str(c)
            res+=str(s[-1])
            s=''.join(res)
        return s 
