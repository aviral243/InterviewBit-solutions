// https://www.interviewbit.com/problems/path-sum/

bool path(TreeNode *A, int B, int sum)
{
    if (A == NULL)
    {
        return (sum == B);
    }
    else
    {
        bool ans = 0;
        sum += A->val;
        if (sum == B && A->left == NULL && A->right == NULL)
            return 1;
        if (A->left)
            ans = ans || path(A->left, B, sum);
        if (A->right)
            ans = ans || path(A->right, B, sum);
        return ans;
    }
}

int Solution::hasPathSum(TreeNode *A, int B)
{
    int sum = 0;
    bool res = path(A, B, sum);
    if (res)
        return 1;
    else
        return 0;
}