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
    TreeNode*next_pointer=NULL;
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        if(root==NULL)
         return ;
         flatten(root->right);
         flatten(root->left);
        root->left=NULL;
        root->right=next_pointer;
        next_pointer=root;  
    }
};