//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/772/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        stack <int> s;
        ListNode* a=head;
        ListNode* b=head;
        
        while(b!=NULL && b->next!=NULL){
           s.push(a->val);
            a=a->next;
             b=b->next->next;
        }
        if(b!=NULL) a=a->next;
        while(a!=NULL){
          
            if(s.top()!=a->val) return false;
          s.pop();
            a=a->next;
        }
     return true;
        
    }
};
