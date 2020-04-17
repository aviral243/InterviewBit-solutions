/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode* slow = A;
    stack<int> s;
    while(slow != NULL) {
        s.push(slow->val);
        slow = slow->next;
    }
    
    while(A != NULL) {
        int test = s.top();
        s.pop();
        if(A->val != test) {
            return 0;
        }
        A = A->next;
    }
    return 1;
}
