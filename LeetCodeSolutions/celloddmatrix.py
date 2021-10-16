class Solution:
    
    def oddCells(self, n: int, m: int, indices: List[List[int]]) -> int:
        
        matrix = [[0 for i in range(m)] for j in range(n)] 
        
        def inc(x, y):
            
            for i in range(m):
                matrix[x][i] += 1
            
            for i in range(n):
                matrix[i][y] += 1
                
        for ind in indices:
            inc(ind[0], ind[1])
            
            
        return sum([0 if n % 2 == 0 else 1 for l in matrix for n in l])
