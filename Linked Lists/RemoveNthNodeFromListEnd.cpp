// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* curr = A;
    int len = 0;
    while(curr) {
        len++;
        curr = curr->next;
    }
    
    if(len <= B) {
        return A->next;
    }
    
    curr = A;
    int del = len - B;
    ListNode* next_next = new ListNode(-1);
    
    while(curr) {
        if(del == 1){
            next_next = curr->next->next;
            curr->next = next_next;
            break;
        }
        curr = curr->next;
        del--;
    }
    return A;
}
