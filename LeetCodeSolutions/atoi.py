class Solution:
    def myAtoi(self, s: str) -> int:
        try:
            newString=s.lstrip()
            if newString=="":
                return 0

            start=1 if newString[0] in ["-","+"] else 0
            if newString[start:].isdigit():
                returnString=newString
            else:
                if not newString[start].isdigit():
                    return 0
                temp=start
                while(True):
                    if newString[temp].isdigit():
                        temp+=1
                    else:
                        break
                returnString=newString[:temp]

            if int(returnString)>2**31-1:
                return 2**31-1
            elif int(returnString)<-2**31:
                return -2**31
            else:
                return str(int(returnString))
        except:
            return 0
