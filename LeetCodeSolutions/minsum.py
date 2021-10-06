class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        total = sum(nums)
        nums = sorted(nums, reverse=True)
        
        for i in range(1,len(nums)+1):
            new_sum = sum(nums[:i])   
            if total - new_sum < new_sum:  
                return nums[:i]
