class Solution:
    def calculate(self, s: str) -> int:
        if not s:
            return 0
        
        stack, curr_num, operator = [], 0, "+"
        all_operators = {"+", "-", "*", "/"}
        nums = set(str(x) for x in range(10))
        
        for indx in range(len(s)):
            char = s[indx]
            
            if char in nums:
                curr_num = curr_num * 10 + int(char)
            
            if char in all_operators or indx == len(s) - 1:
                if operator == "+":
                    stack.append(curr_num)
                    
                elif operator == "-":
                    stack.append(-curr_num)
                    
                elif operator == "*":
                    stack[-1] *= curr_num
                
                elif operator == "/":
                    stack[-1] = int(stack[-1] / curr_num)
                    
                curr_num = 0
                operator = char
            
        return sum(stack)
