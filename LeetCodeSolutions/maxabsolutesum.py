class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        max_sub = max_min = max_pos = 0
        for n in nums:
            max_min = min(n, max_min + n)
            max_pos = max(n, max_pos + n)
            max_sub = max(max_sub, max_pos, abs(max_min))
        return max_sub

            
        
