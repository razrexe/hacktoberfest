    def findErrorNums(self, nums: List[int]) -> List[int]:
        cnts = collections.Counter(nums)
        
        dup = cnts.most_common()[0][0]
        
        for i in range(1,len(nums)+1):
            if i not in cnts:
                return [dup, i]
