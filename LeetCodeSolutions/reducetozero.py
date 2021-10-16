class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
    # return words in 'words' where all its chars are 'allowed'        
        count = 0
    
        for word in words:
            count += 1
            for letter in word:
                if letter not in allowed: 
                    count -= 1
                    break
                  
        return count
