struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev=NULL,*cur=head,*next=NULL;
    while(cur!=NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur=next;
    }
    head = prev;
    return head;
}
