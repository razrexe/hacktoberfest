class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)): 
            for y in range(len(nums)): 
                if (y!=i) and (nums[i] + nums[y]==target): 
                    return [i, y]
