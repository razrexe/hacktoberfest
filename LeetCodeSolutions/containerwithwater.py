class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0
        j=len(height)-1
        area=0
        maxarea=0
        while i<=j:
            if height[i]>height[j]:
                area=(j-i)*height[j]
                j-=1
            else:
                area=(j-i)*height[i]
                i+=1
            maxarea=max(area,maxarea)
        return maxarea
        
