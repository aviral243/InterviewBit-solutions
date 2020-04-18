// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
int findLength(ListNode* head) {
    int len = 0;
    while(head){
        head = head->next;
        len++;
    }
    return len;
}

ListNode* extra = new ListNode(-1);

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int cy = 0, sum = 0;
    int l1 = findLength(A);
    int l2 = findLength(B);
    ListNode* curr1 = A;
    ListNode* curr2 = B;
    if(l1>l2){
        curr2 = A;
        curr1 = B;
    } else {
        curr1 = A;
        curr2 = B;
    }
    while(curr1) {
        sum = curr2->val + curr1->val + cy;
        cy = sum/10;
        curr2->val = sum%10;
        if(cy>0 && curr2->next == NULL){
            extra->val = cy;
            curr2->next = extra;
            extra->next = NULL;
            curr2 = curr2->next->next;
            break;
        }
        curr2 = curr2->next;
        curr1 = curr1->next;
    }
    while(curr2) {
        sum = curr2->val + cy;
        curr2->val = sum%10;
        cy = sum/10;
        if(cy>0 && curr2->next == NULL){
            extra->val = cy;
            curr2->next = extra;
            extra->next = NULL;
            curr2 = curr2->next->next;
            break;
        }
        curr2 = curr2->next;
    }
    if(l1>l2) {
        return A;
    } else {
        return B;
    }
}