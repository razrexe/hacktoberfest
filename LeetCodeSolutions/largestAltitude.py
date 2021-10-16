class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        totalsum=0
        maximum=0
        for i in gain:
            totalsum+=i
            maximum=max(maximum,totalsum)
        return maximum   
