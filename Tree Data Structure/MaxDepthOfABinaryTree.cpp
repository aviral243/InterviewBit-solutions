// https://www.interviewbit.com/problems/max-depth-of-binary-tree/

int Solution::maxDepth(TreeNode *A)
{
    while (A != NULL)
    {
        int x = maxDepth(A->left);
        int y = maxDepth(A->right);
        if (x > y)
            return x + 1;
        else
            return y + 1;
    }
    return 0;
}