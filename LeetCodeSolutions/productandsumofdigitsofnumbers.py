from math import prod

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        nums = [int(x) for x in str(n)]
        return prod(nums)-sum(nums)
