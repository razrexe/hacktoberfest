class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        length = 1
        node = head
        while node.next:
            node = node.next
            length += 1
        z = 0
        bef_head = ListNode(next=head)
        node = bef_head
        while z < length - n:
            node = node.next
            z += 1
        del z
        del length
        if node == bef_head:
            x = head.next
            del bef_head
            return x
        node.next = node.next.next
        del bef_head
        return head
