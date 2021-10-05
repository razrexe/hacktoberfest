class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        po = strs[0]
        while True:
            retval = True
            for i in strs[1:]:
                if i.startswith(po):
                    continue
                else:
                    lpo = list(po)
                    po = ''.join(lpo[:-1]) 
                    retval = False
                    break
            if retval:
                return po
        return ""
