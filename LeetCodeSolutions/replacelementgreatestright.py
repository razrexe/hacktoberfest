class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        
        maxNum = -1
        for i in range(len(arr) - 1, -1, -1):
            last = maxNum
            maxNum = max(maxNum, arr[i])
            arr[i] = last
        return arr
