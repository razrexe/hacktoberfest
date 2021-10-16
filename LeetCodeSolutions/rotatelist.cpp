class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head|| !head->next)
            return head;
        ListNode *p=head;
        ListNode *res;
        int l=1;
        while(p->next!=NULL)
        {
            l++;
            p=p->next;
        
        }
        k=k%l;
        int x=l-k;
        p->next=head;
        while(x--)
            p=p->next;
        res=p->next;
        p->next=NULL;
        return res;
    }
};
