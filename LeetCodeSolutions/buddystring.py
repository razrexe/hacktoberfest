class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        s1 = ""
        s2 = ""
        if len(A) != len(B) or len(A) <= 1:
            return False
        for i in range(len(A)):
            if A[i] == B[i]:
                continue
            elif A[i] != B[i]:
                s1 += A[i]
                s2 += B[i]

        if len(s1) == 0:
            if len(A) == 2:
                if A[0]==A[1]:
                    return True
                else:
                    return False
            else:  
                r = {}
                for i in A:
                    if i not in r:
                        r[i] = 1
                    else:
                        return True
                return False
        elif len(s1) != 2:
            return False    
        else:
            s = s1[::-1]
            if s == s2:
                return True
            return False
