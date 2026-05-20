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
    void fun(TreeNode* root,vector<int>& A,int i){
        if(root==NULL) return;
        if(A.size()==i) A.push_back(root->val);
        fun(root->right,A,i+1);
        fun(root->left,A,i+1);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        int a=0;
        vector<int> A;
        fun(root,A,0);
        return A;
    }
};