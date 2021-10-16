class Solution:
    def canFormArray(self, arr: List[int], pieces: List[List[int]]) -> bool:
        d = {piece[0]: piece for piece in pieces}
        
        res = []
        for x in arr:
            if x in d:
                res.extend(d[x])
        
        return res == arr

