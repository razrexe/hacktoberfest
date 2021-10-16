class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        occur=[]
        set_arr=set(arr)
        for item in set_arr:
            occur.append(arr.count(item))
        return len(occur)==len(set(occur))
