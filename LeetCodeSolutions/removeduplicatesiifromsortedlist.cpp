class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
         ListNode *t=new ListNode(0);
         t->next=head;
         ListNode * cur=t;
         int duplicate;
        while(cur->next && cur->next->next)
        {
            if(cur->next->val==cur->next->next->val)
            {
                duplicate=cur->next->val;
                while(cur->next && cur->next->val==duplicate)
                    cur->next=cur->next->next;
                
            }
            else
                cur=cur->next;
        }
        return t->next;
        
    }
};
