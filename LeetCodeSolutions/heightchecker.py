class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s=[]
        s[:]=heights[:]
        s.sort()
        l=len(s)-1
        c=0
        i=0
        while(i<l-i):
            if(s[i]!=heights[i]):
                c=c+1
            if(s[l-i]!=heights[l-i]):
                c=c+1
            i=i+1
        if(i==l-i and s[i]!=heights[i]):
                c=c+1
        return c
