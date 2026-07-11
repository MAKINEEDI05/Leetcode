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
    int ans=0;
    void fun(TreeNode* root,int currMax){
        if(root==NULL) return;
        if(currMax<=root->val){
            ans+=1;
            currMax=root->val;
        }
        fun(root->left,currMax);
        fun(root->right,currMax);
    }
    int goodNodes(TreeNode* root) {
        fun(root,root->val);
        return ans;
    }
};