class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        count=0
        words=sorted(words,key=len)
        strs=""       
        for i in words[::-1]:
            if i +'#' in strs:
                continue
            else:
                strs+=i+'#'
                count+=len(i)+1
        return count
