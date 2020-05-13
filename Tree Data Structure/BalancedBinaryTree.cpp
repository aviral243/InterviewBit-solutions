// https://www.interviewbit.com/problems/balanced-binary-tree/

int height(TreeNode* node) {
    if(node!=NULL) {
        int x = height(node->left);
        int y = height(node->right);
        if(x>y) return x+1;
        else return y+1;
    }
    return 0;
} 

int Solution::isBalanced(TreeNode* A) {
    if(A==NULL) return 1;
    int l = height(A->left);
    int r = height(A->right);
    if(abs(l-r)<=1 && isBalanced(A->left) && isBalanced(A->right)) {
        return 1;
    }
    return 0;
}