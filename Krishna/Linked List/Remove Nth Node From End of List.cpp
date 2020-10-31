class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (head->next==NULL)      return NULL;
        
        ListNode* a=head;
        ListNode* b=head;
        
        while(n--){
            b=b->next;
         if(b==NULL) return head->next;
        }
        
        while(b->next!=NULL){
             
                a=a->next;
                b=b->next;
            }   
            a->next=a->next->next;
           
        
        return head;
    }
};
