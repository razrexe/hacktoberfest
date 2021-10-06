class Solution:
	def longestPalindrome(self, s: str) -> str:
		res = ""
		length = len(s)
		def helper(left: int, right: int):
			while left >= 0 and right < length and s[left] == s[right]:
				left -= 1
				right += 1
				
			return s[left + 1 : right]
		
		
		for index in range(len(s)):
			res = max(helper(index, index), helper(index, index + 1), res, key = len)
			
		return res
