/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* smallerHead = NULL, *smallerLast = NULL;
    ListNode* greaterHead = NULL, *greaterLast = NULL;
    
    while(A != NULL) {
        if(A->val < B) {
            if(smallerHead == NULL) {
                smallerHead = smallerLast = A;
            } else {
                smallerLast->next = A;
                smallerLast = smallerLast->next;
            }
        } else {
            if(greaterHead == NULL) {
                greaterHead = greaterLast = A;
            } else {
                greaterLast->next = A;
                greaterLast = greaterLast->next;
            }            
        }
        A = A->next;
    }
    
    if(greaterLast != NULL) {
        greaterLast->next = NULL;
    }
    
    if(smallerHead == NULL) {
        return greaterHead;
    }
    
    smallerLast->next = greaterHead;
    return smallerHead;
}
