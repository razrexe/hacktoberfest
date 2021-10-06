class Solution:
	def findKthPositive(self, arr: List[int], k: int) -> int:
		missingnumbers=[]
    
		i=1
		while(len(missingnumbers)<k):
			if i not in arr:
				missingnumbers.append(i)
			i+=1
		return missingnumbers[-1]
