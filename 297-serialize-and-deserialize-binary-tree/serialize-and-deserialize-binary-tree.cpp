/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
         if(root==NULL) return "";
         string serialize="";
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            if(node!=NULL) {
            serialize+=to_string(node->val)+",";
             q.push(node->left);
             q.push(node->right);
            }
             else {
                serialize+="null,";}
         }
         return serialize;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="") return NULL;
        stringstream ss(data);
        string item;
        getline(ss,item,',');
        TreeNode*root=new TreeNode(stoi(item));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            getline(ss,item,',');
            if(item!="null"){
                node->left=new TreeNode(stoi(item));
                 q.push(node->left);
            }
            getline(ss,item,',');
            if(item!="null"){
                node->right=new TreeNode(stoi(item));
                q.push(node->right);
            }
        }
return root;

        }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));