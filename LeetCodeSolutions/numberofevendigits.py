class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        return sum((len(str(i))) % 2 == 0 for i in nums)
