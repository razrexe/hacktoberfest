class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = sorted(nums)
        missing = 1
        for n in nums:
            if n == missing:
                missing += 1
            
        return missing
