class Solution(object):
    def lengthOfLongestSubstring(self, s):
        sub = ""
        max_len = cur_len = 0
        
        for ch in s:
            if ch in sub:
                index = sub.index(ch)
                sub = sub[index+1:]
                cur_len = len(sub)
            sub += ch
            cur_len += 1
            if max_len < cur_len:
                max_len = cur_len
        
        return max_len
        
