class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* temp = head;
        while(temp!=NULL){
            s.push(temp->val);
            temp=temp->next;
        }
        temp = head;
        while(temp!=NULL){
            int i = s.top();
            if(i!=temp->val)
                return false;
            s.pop();
            temp = temp->next;
        }
        return true;
    }
};
