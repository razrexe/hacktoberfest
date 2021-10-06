class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n= len(mat)
        sum_ = 0
        mid = n//2
        for i in range(n):
            sum_ += mat[i][i]
            sum_ += mat[n-1-i][i]
            
        if n%2 != 0:
            sum_ -= mat[mid][mid]
        
        return sum_
