class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr = head;
        int steps = 0;
        
        while(ptr && steps != k - 1){
            ptr = ptr->next;
            steps++;
        }
        
        ListNode* kthFromBeginning = ptr;
        ListNode* kthFromEnd = head;
        ptr = head;
        
        steps = 0;
        
        while(ptr && steps != k - 1){
            ptr = ptr->next;
            steps++;
        }
        
        while(ptr && kthFromEnd){
            ptr = ptr->next;
            if(!ptr) break;
            
            kthFromEnd = kthFromEnd->next;
        }
        
        int temp = kthFromBeginning->val;
        kthFromBeginning->val = kthFromEnd->val;
        kthFromEnd->val = temp;
        
        return head;
    }
};
