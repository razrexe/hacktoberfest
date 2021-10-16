class Solution {
public:
    bool isPalindrome(ListNode* head) {
      ListNode* fast=head;
      ListNode* slow=head;
        ListNode* temp=head;
      while(fast!=NULL&&fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
      }
        ListNode* curr=slow;
        ListNode* prev=NULL;
        while(curr!=NULL)
        {
            ListNode* ahead=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ahead;
        }
        ListNode* slow1=prev;
        while(slow1!=NULL&&temp!=NULL)
        {
            if(slow1->val!=temp->val)
                return false;
            slow1=slow1->next;
            temp=temp->next;
        }
        return true;
        
    }
};
