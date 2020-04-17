// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* prev = A;
    ListNode* curr1 = A;
    ListNode* curr2 = B;
    ListNode* head = new ListNode(-1);
    if(curr1->val > curr2->val) {
        prev = curr2;
        head = curr2;
        curr2 = curr2->next;
        
    } else {
        prev = curr1;
        head = curr1;
        curr1 = curr1->next;
    }
    
    while(curr1 && curr2) {
        if(curr1->val > curr2->val) {
            prev->next = curr2;
            prev = prev->next;
            if(curr2) curr2 = curr2->next;
        } else {
            prev->next = curr1;
            prev = prev->next;
            if(curr1) curr1 = curr1->next;
        }
    }
    if(curr1){
        prev->next = curr1;
    }
    if(curr2) {
        prev->next = curr2;
    }
    return head;
}