class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        def gen(words):
            for w in words: 
                for c in w: 
                    yield c
            
            yield None
        
        return all(c1 == c2 for c1, c2 in zip(gen(word1), gen(word2)))
