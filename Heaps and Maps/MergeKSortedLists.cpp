// https://www.interviewbit.com/problems/merge-k-sorted-lists/
struct compare
{
    bool operator()(struct ListNode *a, struct ListNode *b)
    {
        return a->val > b->val;
    }
};

ListNode *Solution::mergeKLists(vector<ListNode *> &A)
{
    ListNode *head = NULL, *last;
    int k = A.size();

    priority_queue<ListNode *, vector<ListNode *>, compare> pq;

    for (int i = 0; i < k; i++)
    {
        if (A[i] != NULL)
        {
            pq.push(A[i]);
        }
    }

    while (!pq.empty())
    {
        ListNode *top = pq.top();
        pq.pop();
        if (top->next != NULL)
        {
            pq.push(top->next);
        }
        if (head == NULL)
        {
            head = top;

            last = top;
        }
        else
        {
            last->next = top;
            last = top;
        }
    }
    return head;
}
