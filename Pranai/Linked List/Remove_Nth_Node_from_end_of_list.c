struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int count=0;
    struct ListNode *cur = head;
    while(cur->next!=NULL){
        count++;
        cur=cur->next;
    }
    int index = count-n+1;
    struct ListNode *cur1 = head;
    if(count==0)
        return head=NULL;
    if(count==index){
        index--;
        while(index--)
            cur1=cur1->next;
        cur1->next = NULL;
        return head;
    }
    while(index--)
        cur1=cur1->next;
    cur1->val = cur1->next->val;
    cur1->next = cur1->next->next;
    return head;
}
