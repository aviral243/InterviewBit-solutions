// https://www.interviewbit.com/problems/sorted-array-to-balanced-bst/

TreeNode *createBST(const vector<int> &A, int i, int j)
{
    if (i > j)
        return NULL;
    auto mid = (i + j) >> 1;
    TreeNode *root = new TreeNode(A[mid]);
    if (i == j)
        return root;
    root->left = createBST(A, i, mid - 1);
    root->right = createBST(A, mid + 1, j);
    return root;
}
TreeNode *Solution::sortedArrayToBST(const vector<int> &A)
{
    if (A.empty())
        return NULL;
    return createBST(A, 0, A.size() - 1);
}