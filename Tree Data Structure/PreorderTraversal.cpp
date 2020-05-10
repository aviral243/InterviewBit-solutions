// https://www.interviewbit.com/problems/preorder-traversal/

vector<int> Solution::preorderTraversal(TreeNode *A)
{
    stack<TreeNode *> addr;
    TreeNode *node = A;
    vector<int> res;
    while (node != NULL || !addr.empty())
    {
        if (node != NULL)
        {
            res.push_back(node->val);
            addr.push(node);
            node = node->left;
        }
        else
        {
            node = addr.top();
            addr.pop();
            node = node->right;
        }
    }
    return res;
}
