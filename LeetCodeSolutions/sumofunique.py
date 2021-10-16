class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        p={}
        ans=0
        for i in range(len(nums)):
            if nums[i] not in p:
                p[nums[i]]=1
            else:
                p[nums[i]]=p[nums[i]]+1
        print(p)
        for i in p:
            if p[i]==1:
                ans=ans+i
        return ans
