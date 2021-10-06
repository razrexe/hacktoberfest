class Solution {
public:
ListNode* reverseBetween(ListNode* head, int m, int n) 
{
	auto **pivot{&head->next}, **start{&head};

	for(; --n && --m; pivot = &(*(start = pivot))->next); 
	for(; n--; swap(*start, (*pivot)->next), swap(*start, *pivot)); 

	return head;
}
};
