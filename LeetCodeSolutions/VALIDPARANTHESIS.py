class Solution:
    def isValid(self, s: str) -> bool:
            if len(s) <= 1:
                return False

            stack = []
            for ch in s:
                if ch == '(' or ch == '{' or ch == '[':
                    stack.append(ch)
		
                elif ch == ')' and stack and stack.pop() == '(':
                    continue
		
                elif ch == '}' and stack and stack.pop() == '{':
                    continue
		
                elif ch == ']' and stack and stack.pop() == '[':
                    continue
                else:
                    return False

            return True if not stack else False
