class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates = [x for x in candidates if x <= target]
        
        result = []
        
        for i in range(0, len(candidates)):
            
            v = candidates[i]
            times = target//v
            if target%v == 0:
                result.append([v]*times)
            
            for j in range(times):
                
                new_target = target-v*(j+1)
                new_cand = self.combinationSum(candidates[i+1:], new_target)
                
                for x in new_cand:
                    possible = [v]*(j+1)
                    possible.extend(x)
                    result.append(possible)
            
        return result
