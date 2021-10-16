
class Solution:
    def addTwoNumbers(self, l1: 'ListNode', l2: 'ListNode') -> 'ListNode':
        t = 0
        head = l1
        while l2:
            _sum = l2.val + l1.val + t
            l1.val = _sum % 10
            t = _sum // 10
            if l1.next is None:
                l1.next = l2.next
                break
            if l2.next is None:
                break
            l1 = l1.next
            l2 = l2.next
        while t > 0:
            if l1.next is None:
                l1.next = ListNode(0)
            l1 = l1.next
            _sum = t + l1.val
            l1.val = _sum % 10
            t = _sum // 10

        return head
