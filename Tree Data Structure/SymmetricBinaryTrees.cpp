// https://www.interviewbit.com/problems/symmetric-binary-tree/

bool isMirror(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 && root2 && (root1->val == root2->val))
    {
        return isMirror(root1->left, root2->right) &&
               isMirror(root1->right, root2->left);
    }
    return false;
}
int Solution::isSymmetric(TreeNode *A)
{
    bool res = isMirror(A->left, A->right);
    if (res)
        return 1;
    else
        return 0;
}