class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        new = nums1 + nums2
        new.sort()
        if len(new) % 2 ==0:
            return (new[len(new) // 2-1] + new[len(new)//2])/2
        else:
            return new[len(new)//2]
