//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/771/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode t(INT_MIN);
        ListNode* n=&t;
        
        while(l1!=NULL && l2!=NULL){
           if(l1->val > l2->val){
               n->next=l2;
               l2=l2->next;
            
           }
            else{
                n->next=l1;
                l1=l1->next;
            }
            n=n->next;
       }
        
     n->next=l1 ? l1 : l2;
        
        return t.next;
    }
};
