// https://www.interviewbit.com/problems/min-depth-of-binary-tree/

int Solution::minDepth(TreeNode *A)
{
    while (A != NULL)
    {
        int x = minDepth(A->left);
        int y = minDepth(A->right);
        if (x == 0 && y == 0)
        {
            return 1;
        }
        else if (x == 0 && y != 0)
        {
            return y + 1;
        }
        else if (x != 0 && y == 0)
        {
            return x + 1;
        }
        else
        {
            if (x < y)
                return x + 1;
            else
                return y + 1;
        }
    }
    return 0;
}