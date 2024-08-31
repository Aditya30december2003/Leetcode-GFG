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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
       if (!root1 && !root2) {
            return NULL;
        }
        
        // Initialize the root node with the value from either root1 or root2, or zero if both are NULL
        int rootValue = 0;
        if (root1) rootValue += root1->val;
        if (root2) rootValue += root2->val;

        TreeNode* root = new TreeNode(rootValue);
        
        // Recursively merge the left and right subtrees
        root->left = mergeTrees(root1 ? root1->left : NULL, root2 ? root2->left : NULL);
        root->right = mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right : NULL);

        return root;
    }
};