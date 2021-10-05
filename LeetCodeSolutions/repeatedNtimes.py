class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        if A==[]:
            return 0
        d={}
        for i in A:
            if i not in d.keys():
                d[i]=1
            else:
                return i
        return 0
