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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        int a=0,i=0,n=0;
        vector<vector<int>> A;
        queue<TreeNode*> B;
        B.push(root);
        while(!B.empty()){
            n=B.size();
            vector<int> C;
            for(i=0;i<n;i++){
                TreeNode* node=B.front();
                B.pop();
                C.push_back(node->val);
                if(node->left!=NULL) B.push(node->left);
                if(node->right!=NULL) B.push(node->right);
            }
            A.push_back(C);
        }
        return A;
    }
};