class Solution:
    def removeDuplicates(self, S):
       
        if not S: return s
        stack = []
        for ch in S:
            if stack and stack[-1]==ch: 
                stack.pop()
                continue
            stack.append(ch)
        return "".join(stack)

        
