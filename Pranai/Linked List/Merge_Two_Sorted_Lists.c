struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *i=l1,*j=l2;
    struct ListNode *head = NULL;
    while(i!=NULL && j!=NULL){
        struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        if(i->val<=j->val){
            temp->val = i->val;
            temp->next=NULL;
            i=i->next;
        }
        else{
            temp->val = j->val;
            temp->next=NULL;
            j=j->next;
        }
        if(head==NULL)
            head=temp;
        else{
            struct ListNode *cur = head;
            while(cur->next!=NULL)
                cur = cur->next;
            cur->next = temp;
        }
    }
    while(i!=NULL){
        struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = i->val;
        temp->next=NULL;
        if(head==NULL)
            head=temp;
        else{
            struct ListNode *cur = head;
            while(cur->next!=NULL)
                cur = cur->next;
            cur->next = temp;
        }
        i=i->next;
    }
    while(j!=NULL){
        struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = j->val;
        temp->next=NULL;
        if(head==NULL)
            head=temp;
        else{
            struct ListNode *cur = head;
            while(cur->next!=NULL)
                cur = cur->next;
            cur->next = temp;
        }
        j=j->next;
    }
    return head;
}
