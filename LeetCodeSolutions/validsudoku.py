class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:        
	column_items = {i: set() for i in range(9)}
    box_items = {i: set() for i in range(9)}

    for i in range(9):
        row_items = set()
        for j in range(9):
            if board[i][j].isdigit():
                item = board[i][j]
                if item in row_items or item in column_items[j]:
                    return False
                row_items.add(item)
                column_items[j].add(item)

                index = (i // 3) * 3 + j // 3
                if item in box_items[index]:
                    return False
                box_items[index].add(item)

    return True
