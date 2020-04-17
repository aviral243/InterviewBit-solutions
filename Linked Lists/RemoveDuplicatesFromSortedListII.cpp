ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(!A || !A->next) return A;
    ListNode* prev=A;
    ListNode* head=new ListNode(-1);
    ListNode* head2=head;
    ListNode *curr=A->next;
    head->next=A;
    while(curr){
        int f=0;
        while(curr && prev && curr->val==prev->val){
            curr=curr->next;
            f=1;
        }
        if(f==1){
            prev=curr;
            if(curr) curr=curr->next;
        } else{
            head->next=prev;head=head->next;
            prev=prev->next;
            curr=curr->next;
        }
    }
    if(head->next->next==NULL) return head2->next;
    else head->next=NULL;
    return head2->next;
}