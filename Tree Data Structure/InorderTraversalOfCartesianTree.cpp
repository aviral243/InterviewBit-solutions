// https://www.interviewbit.com/problems/inorder-traversal-of-cartesian-tree/

int find(vector<int> A, int start, int end)
{
    int max = INT_MIN;
    int index = start;
    for (int i = start; i <= end; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            index = i;
        }
    }
    return index;
}
TreeNode *build(vector<int> A, int start, int end)
{
    if (start > end)
        return NULL;
    int index = find(A, start, end);

    TreeNode *root = new TreeNode(A[index]);
    root->left = build(A, start, index - 1);
    root->right = build(A, index + 1, end);
    return root;
}

TreeNode *Solution::buildTree(vector<int> &A)
{
    TreeNode *root = build(A, 0, A.size() - 1);
    return root;
}