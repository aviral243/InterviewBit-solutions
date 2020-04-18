/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
} 
 
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* prev = NULL;
    ListNode* next = NULL;
    ListNode* revs = NULL;
    ListNode* curr = A;
    ListNode* end = NULL;
    if(B == C) {
        return A;
    }
    
    int i = 1;
    while(curr && i <= C) {
        if(i < B ) {
            prev = curr;
        }
        if(i == B) {
            revs = curr;
        }
        
        if(i == C) {
            end = curr;
            next = curr->next;
        }
        curr = curr->next;
        i++;
    }
    end->next = NULL;
    end = reverse(revs);
    
    if(prev) {
        prev->next = end;
    } else {
        A = end;
    }
    revs->next = next;
    
    return A;
}
