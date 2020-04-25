// https://www.interviewbit.com/problems/copy-list/

/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode *Solution::copyRandomList(RandomListNode *A)
{
    RandomListNode *origCurr = A;
    RandomListNode *cloneCurr = NULL;
    unordered_map<RandomListNode *, RandomListNode *> node;

    while (origCurr != NULL)
    {
        cloneCurr = new RandomListNode(origCurr->label);
        node[origCurr] = cloneCurr;
        origCurr = origCurr->next;
    }

    origCurr = A;

    while (origCurr != NULL)
    {
        cloneCurr = node[origCurr];
        cloneCurr->next = node[origCurr->next];
        cloneCurr->random = node[origCurr->random];
        origCurr = origCurr->next;
    }
    cloneCurr = node[A];
    return cloneCurr;
}
