class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        i= len(matrix)-1
        j = 0
        while i>-1 and j<len(matrix[0]):
            if target ==matrix[i][j]:
                return True
            elif target>matrix[i][j]:
                j = j + 1
            else:
                i = i - 1
        return False
