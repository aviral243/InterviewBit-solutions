#include <bits/stdc++.h>
using namespace std;

// https://www.interviewbit.com/problems/postorder-traversal/

vector<int> Solution::postorderTraversal(TreeNode *A)
{
    stack<long int> addr;
    long int temp;
    TreeNode *node = A;
    vector<int> res;
    while (node != NULL || !addr.empty())
    {
        if (node != NULL)
        {
            addr.push((long int)node);
            node = node->left;
        }
        else
        {
            temp = addr.top();
            addr.pop();
            if (temp > 0)
            {
                addr.push(-temp);
                node = ((TreeNode *)temp)->right;
            }
            else
            {
                res.push_back(((TreeNode *)(-temp))->val);
                node = NULL;
            }
        }
    }
    return res;
}
