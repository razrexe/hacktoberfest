class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        c=0
        for i in range(len(nums)):
            c+=nums[:i].count(nums[i])
        return c
