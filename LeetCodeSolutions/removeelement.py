class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        l, r = 0, len(nums)-1
        while l <= r:
            if nums[l] == val:
                for i in range(l,r):
                    nums[i] = nums[i+1]
                r -= 1
            else:
                l += 1
        return r+1
