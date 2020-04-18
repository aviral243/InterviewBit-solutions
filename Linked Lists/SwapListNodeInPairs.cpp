/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* curr = A;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    
    int count = 0;
    
    while(curr != NULL && count < 2) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL) {
        A->next = swapPairs(next);
    }
    return prev;
}
