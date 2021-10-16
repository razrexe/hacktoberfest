class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []
        i = 0
        while i < len(asteroids):
            curr = asteroids[i]
            
            if curr > 0 or len(stack) == 0 or stack[-1] < 0:
                stack.append(curr)
                

            elif abs(curr) == stack[-1]:
                stack.pop()
                i += 1
                continue
            
            elif abs(curr) > stack[-1]:
                stack.pop()
                i -= 1
            i+=1
                
        return stack
