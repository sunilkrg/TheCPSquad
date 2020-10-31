//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/773/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *a=head->next;
        ListNode *b=head;
        while(a!=b){
            if(a==NULL || a->next==NULL) return false;
            b=b->next;
            a=a->next->next;
        }
        return true;
        
    }
};
