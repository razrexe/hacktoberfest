class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        
        nums.sort()
        res=set()
        for first in range(len(nums)):
            for second in range(first+1,len(nums)):

                third=second+1
                fourth=len(nums)-1

                while third<fourth:
                    cursum=nums[first]+nums[second]+nums[third]+nums[fourth]
                    if target==cursum:
                        res.add((nums[first],nums[second],nums[third],nums[fourth]))
                        third+=1
                        fourth-=1

                    elif cursum<target:
                        third+=1

                    else:
                        fourth-=1
                    
        return res
