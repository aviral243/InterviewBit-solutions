// https://www.interviewbit.com/problems/identical-binary-trees/

int Solution::isSameTree(TreeNode *A, TreeNode *B)
{
    while (A != NULL || B != NULL)
    {
        if (A == NULL)
        {
            return 0;
        }
        if (B == NULL)
        {
            return 0;
        }
        if (A->val != B->val)
        {
            return 0;
        }
        int x = isSameTree(A->left, B->left);
        int y = isSameTree(A->right, B->right);
        return x && y;
    }
    return 1;
}