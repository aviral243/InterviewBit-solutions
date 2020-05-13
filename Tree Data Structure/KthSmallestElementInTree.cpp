// https://www.interviewbit.com/problems/kth-smallest-element-in-tree/

int inorderTraversal(TreeNode *A, int B)
{
    int count = 0;
    stack<TreeNode *> addr;
    TreeNode *node = A;
    vector<int> res;
    while (node != NULL || !addr.empty())
    {
        if (node != NULL)
        {
            addr.push(node);
            node = node->left;
        }
        else
        {
            node = addr.top();
            addr.pop();
            res.push_back(node->val);
            count++;
            if (count == B)
                return res[count - 1];
            node = node->right;
        }
    }
}

int Solution::kthsmallest(TreeNode *A, int B)
{
    int res = inorderTraversal(A, B);
    return res;
}
