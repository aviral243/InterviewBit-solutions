/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* curr = A;
    if(curr == NULL) {
        return A;
    }
    ListNode* next_next;
    while(curr->next != NULL) {
        if(curr->val == curr->next->val){
            next_next = curr->next->next;
            free(curr->next);
            curr->next = next_next;
        } else {
            curr = curr->next;
        }
    }
    return A;
}
