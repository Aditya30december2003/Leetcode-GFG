/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
TreeNode *Solve(TreeNode* root , TreeNode *p , TreeNode* q){
    if(!root) return NULL;

    if(root->val < p->val && root->val < q->val){
        return Solve(root->right , p , q);
    }
    else if(root->val > p->val && root->val > q->val){
        return Solve(root->left , p , q);
    }
    
    return root;

}
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return Solve(root , p , q);
    }
};