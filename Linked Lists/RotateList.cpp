// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* curr = A;
    ListNode* head = A;
    ListNode* brk = new ListNode(-1);
    int len = 0;
    while(curr) {
        len++;
        curr = curr->next;
    }
    
    if(B%len == 0) {
        return A;
    }
    
    curr = A;
    B = B % len;
    int rot = len - B;
    
    while(curr) {
        if(rot == 1) {
            brk = curr;
            for(int i = 0; i<B; i++) {
                curr = curr->next;
            }
            curr->next = head;
            A = brk->next;
            brk->next = NULL;
        }
        curr = curr->next;
        rot--;
    }
    return A;
}
