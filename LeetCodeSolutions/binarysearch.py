class Solution(object):
    def search(self, nums, target):
       
        if not nums: # extreme case
            return -1
        
        if nums[-1]<target or nums[0]>target: # target are larger than maximun or smaller than minimum
            return -1
        
        i, j = 0, len(nums)-1 # i and j are first and last index
        while i <= j:
            ind = int( (i+j)/2 ) # select i and j middle index 
            if nums[ind] == target: # element in middle index is target
                return ind
            elif nums[ind] > target:
                j = ind-1 
            else:
                i = ind+1 
        return -1
