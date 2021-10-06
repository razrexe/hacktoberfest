class Solution:
    def maxPower(self, s: str) -> int:
         return max(len(list(j)) for _,j in groupby(s))
