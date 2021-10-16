class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        l = len(nums)
        return l * (1 + l) // 2 - sum(nums)
