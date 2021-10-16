class Solution:
    def merge(self, n1: List[int], m: int, n2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        while m > 0 and n > 0:
            if n1[m - 1] > n2[n - 1]:
                n1[m + n - 1] = n1[m - 1]
                m -= 1
            else:
                n1[m + n - 1] = n2[n - 1]
                n -= 1
        n1[:n] = n2[:n]
