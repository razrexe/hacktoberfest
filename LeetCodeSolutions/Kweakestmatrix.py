class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        ls = []
        for idx,row in enumerate(mat):
            ls.append([idx, row.count(1)])
            
        ls = sorted(ls, key = lambda x: x[1] )
        ans = []
        for x in range(k):
            ans.append(ls[x][0])
        return ans
