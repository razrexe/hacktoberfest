class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if head:
            previous = head 
            current = head.next 

            while current  != None:
                if previous.val == current.val :
                    previous.next = current.next 
                    current = current.next 
                else:
                    previous = previous.next 
                    current = current.next 

            return head 
        else:
            return None 
