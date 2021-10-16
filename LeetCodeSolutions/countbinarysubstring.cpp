class Solution:
    def countBinarySubstrings(self, s: str) -> int:
	    ans, prev, cur = 0, 0, 1
	    for i in range(1, len(s)):
		    if s[i] != s[i - 1]:
			    ans += min(prev, cur)
			    prev = cur
			    cur = 1
		    else:
			    cur += 1
	    ans += min(prev, cur)
	    return ans
