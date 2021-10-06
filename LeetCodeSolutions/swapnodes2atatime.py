class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        head2 = head
        while head and head.next:
            head.val, head.next.val = head.next.val, head.val
            head = head.next.next
            
        return head2        
