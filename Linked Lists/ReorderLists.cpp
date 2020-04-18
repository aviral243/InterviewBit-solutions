/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
// Slow
ListNode* Solution::reorderList(ListNode* A) {
    ListNode* start = A;
    int len = 0;
    while(start) {
        len++;
        start = start->next;
    }
    start = A;
    ListNode* ep = A;
    ListNode* snext = A->next;
    int count = len/2;
    int end = len-1;
    while(count) {
        ep = A;
        for(int i = 1; i<=end; i++) {
            ep = ep->next;
        }
        if(count!=1){
            start->next = ep;
            start = snext;
            ep->next = snext;
            snext = snext->next;
        } else {
            start->next = ep;
            if(len%2==0)
                ep->next = NULL;
            else {
                ep->next = snext;
                snext->next = NULL;
            }
        }
        count--;
    }
    return A;
}

// Fast

ListNode* Solution::reorderList(ListNode* A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    if(!A || !A->next)
        return A;
        
    //find middle: O(n)
    ListNode *slw = A, *fst = A;
    while(fst->next && fst->next->next)
    {
        slw = slw->next;
        fst = fst->next->next;
    }

    // cut from the middle and reverse the second half: O(n)
    ListNode *mid = slw, *preCurr = slw->next;
    while(preCurr->next)
    {
        ListNode *curr = preCurr->next;
        preCurr->next = curr->next;
        curr->next = mid->next;
        mid->next = curr;
    }

    // merge two lists: O(n)
    ListNode *p1 = A, *p2 = mid->next;
    while(p1 != mid)
    {
        mid->next = p2->next;
        p2->next = p1->next;
        p1->next = p2;
        p1 = p2->next;
        p2 = mid->next;
    }

    return A;
    
}


