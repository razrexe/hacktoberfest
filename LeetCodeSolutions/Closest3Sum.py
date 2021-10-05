class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        total = nums[0] + nums[1] + nums[len(nums)-1]
        for i in range(len(nums)-2):
            low = i + 1
            high = len(nums) - 1
            while low < high:
                curr = nums[i] + nums[low] + nums[high]
              
                if abs(target - curr) < abs(target - total):
                    total = curr
                if curr < target:
                    low += 1
                    while low < high and nums[low] == nums[low-1]:
                        low += 1
                elif curr > target:
                    high -= 1
                    while low < high and nums[high] == nums[high+1]:
                        high -= 1
                else:
                    return target
        return total
