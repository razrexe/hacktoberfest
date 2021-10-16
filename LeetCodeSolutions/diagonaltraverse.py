class Solution:
    def findDiagonalOrder(self, matrix: List[List[int]]) -> List[int]:
        
        if not matrix: return []
        len_row = len(matrix)
        len_col = len(matrix[0])
        
        result = []
        row = col = 0
        for i in range(len_row * len_col):
            result.append(matrix[row][col])
            if (row + col) % 2 == 0:
                
                if col == len_col -1:
                    row += 1
                elif row == 0:
                    col += 1
                else:
                    row -= 1
                    col += 1
            else:
                if row == len_row -1:
                    col += 1
                elif col == 0:
                    row += 1
                else:
                    row += 1
                    col -= 1   
        return result
