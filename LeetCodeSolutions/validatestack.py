class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        j = -1; i = 0
        for j in range(len(pushed)):
            while j >= 0 and popped[i] == pushed[j]:
                j -= 1
                while j >= 0 and any(popped[k] == pushed[j] for k in range(i)): j -= 1
                i += 1
                    
        return j == -1
