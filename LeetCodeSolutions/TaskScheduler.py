from collections import Counter
class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        if not tasks:
            return 0
        
        count_dict = Counter(tasks)
        lst = sorted(count_dict.values(), reverse=True)
        most_common = lst[0]
        counter = 0
        i=0
        while i<len(lst) and lst[i]==most_common:
            counter += 1
            i += 1
            
        ret = (most_common - 1) * (n+1) + counter
        return max(len(tasks), ret)
