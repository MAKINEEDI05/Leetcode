/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool fun(TreeNode* A,TreeNode* B){
        if(A==NULL && B==NULL) return 1;
        if(A==NULL || B==NULL || A->val!=B->val) return 0;
        return fun(A->left,B->left) && fun(A->right,B->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return 0;
        int a=fun(root,subRoot);
        if(a) return 1;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};