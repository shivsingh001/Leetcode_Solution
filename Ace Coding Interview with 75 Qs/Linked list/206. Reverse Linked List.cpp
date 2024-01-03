
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* aft=head;
        
        while(cur!=NULL)
        {
            aft=aft->next;
            cur->next=prev;
            prev=cur;
            cur=aft;
            
            
        }
        
        return prev;
    }
};