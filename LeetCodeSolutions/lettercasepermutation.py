class Solution:
    def letterCasePermutation(self, S: str) -> List[str]:
	    res = []

	    def allstrings(queue=[], i=0):
		    if i == len(S): 
			    res.append(''.join(queue))
			    return
		    for ch in set([S[i].lower(), S[i].upper()]):
			    queue.append(ch)
			    allstrings(queue, i+1)
			    queue.pop()

	    allstrings()
	    return res
