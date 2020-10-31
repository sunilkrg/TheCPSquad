//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/560/

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
    ListNode* reverseList(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return head;
        ListNode* p=reverseList(head->next);
    
        head->next->next=head;    //head->next=5
        head->next=NULL;
        return p;
    }
};
