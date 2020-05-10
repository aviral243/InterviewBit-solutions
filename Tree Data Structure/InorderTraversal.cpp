// https://www.interviewbit.com/problems/inorder-traversal/

vector<int> Solution::inorderTraversal(TreeNode *A)
{
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
            node = node->right;
        }
    }
    return res;
}