class Solution(object):
    def isBipartite(self, graph):
        def bfs(node):
        
            queue = []
            queue.append(node)
            color[node] = 0
        
            while queue:
                
                current_node = queue.pop(0)
                current_color = color.get(current_node)

                for neighbor in graph[current_node]:
                    if color[neighbor] == current_color:
                        return False

                    if color[neighbor] != current_color and color[neighbor] == -1:
                        color[neighbor] = 1 - current_color
                        queue.append(neighbor)

            return True
        
        
        color = {}
        
        for i in range(len(graph)):
            if not i in color:
                color[i] = -1 
        
        for i in range(len(graph)):
            if color[i] == -1:
                if not bfs(i):
                    return False
        
        return True
