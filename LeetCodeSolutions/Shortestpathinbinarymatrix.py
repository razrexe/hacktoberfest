from collections import deque


class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        if grid[0][0] != 0:
            return -1
        n = len(grid)
        if n == 1:
            if grid[0][0] == 0:
                return 1

        dq = deque()
        dq.append([0, 0])
        length = 1
        while dq:
            length += 1
            for _ in range(len(dq)):
                x, y = dq.popleft()
                for i in [-1, 0, 1]:
                    for j in [-1, 0, 1]:
                        if i == 0 and j == 0:
                            continue
                        if 0 <= x + i < n and 0 <= y + j < n and grid[x + i][y + j] == 0:
                            if x + i == n - 1 and y + j == n - 1:
                                return length
                            dq.append([x + i, y + j])
                            grid[x + i][y + j] = 1

        return -1
