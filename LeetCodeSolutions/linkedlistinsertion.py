

class Solution:
    
    def getIntersectionNode(self, headA, headB):
        curA,curB = headA,headB
        lenA,lenB = 0,0
        while curA:
            lenA += 1
            curA = curA.next
        while curB:
            lenB += 1
            curB = curB.next
        curA,curB = headA,headB
        for i in range(abs(lenA-lenB)):
            if lenA >= lenB:
                curA = curA.next
            else:
                curB = curB.next
        while curB != curA:
            curA,curB = curA.next, curB.next
        return curA
