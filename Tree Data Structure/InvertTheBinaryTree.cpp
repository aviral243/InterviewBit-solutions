// https://www.interviewbit.com/problems/invert-the-binary-tree/

void invert(TreeNode *A)
{
    if (A != NULL)
    {
        TreeNode *temp;
        temp = A->left;
        A->left = A->right;
        A->right = temp;
        invert(A->left);
        invert(A->right);
    }
    else
    {
        return;
    }
}

TreeNode *Solution::invertTree(TreeNode *A)
{
    invert(A);
    return A;
}