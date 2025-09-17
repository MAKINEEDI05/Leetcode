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
    void fun(string a,vector<string>& A,TreeNode* root){
        if(root->left==NULL && root->right==NULL){
            a+=to_string(root->val);
            A.push_back(a);
            return;
        }
        string i=to_string(root->val);
        if(root->left!=NULL){
            fun(a+i+"->",A,root->left);
        }
        if(root->right!=NULL){
            fun(a+i+"->",A,root->right);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        int a=0;
        string aa="";
        vector<string> A;
        fun(aa,A,root);
        return A;
    }
};