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
    int MinVal(TreeNode *root){
        while (root->left) {
            root = root->left;
        }
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;


        if(key < root->val)
        root->left = deleteNode(root->left , key);

        else if(key > root->val)
        root->right =deleteNode(root->right , key);
  
        else{
            if(!root->left)
            return root->right;
            if(!root->right)
            return root->left;
            
            root->val = MinVal(root->right);

            root->right = deleteNode(root->right , root->val);
           }
        return root;
    }
};