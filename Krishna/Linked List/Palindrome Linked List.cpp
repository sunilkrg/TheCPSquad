class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        if(head == NULL || head->next==NULL) 
        return true;
      
        auto slow = head;
        auto fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
       
        ListNode* prev = NULL, *cur = head;
        while(cur != slow){
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
       
        if(fast){
            slow = slow->next;
        }
  
        while(slow && prev) {
            if(slow->val != prev->val) return false;
            else{
                slow = slow->next;
                prev = prev->next;
            }
        }
        return true;
    }
};
