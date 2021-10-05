class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        start = (0 ,0)
        fresh = set([])
        bfs = deque()
        for i in range(0, len(grid)):
            for j in range(0, len(grid[0])):
                if grid[i][j] == 2:
                    bfs.append(((i, j), 0)) 
                if grid[i][j] == 1:
                    fresh.add((i, j))
        level = 0
        visited = set([])
        while len(bfs)!=0:
            top = bfs.popleft()
            x = top[0][0]
            y = top[0][1]
            if (x,y) in visited:
                continue
            visited.add((x, y))
            grid[x][y] = 2
            if (x, y) in fresh:
                fresh.remove((x, y)) 
            level = top[1]
            
            if x > 0 and grid[x - 1][y] == 1:
                bfs.append(((x - 1, y), level + 1))
            if y > 0 and grid[x][y - 1] == 1:
                bfs.append(((x, y - 1), level + 1))
            if y < len(grid[0]) - 1 and grid[x][y + 1] == 1:
                bfs.append(((x, y + 1), level + 1))
            if x < len(grid) - 1  and grid[x + 1][y] == 1:
                bfs.append(((x + 1, y), level + 1))
        
        return level if len(fresh) == 0 else -1
