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
   void Solve(TreeNode *root , vector<string>&ans , string node){
    if(!root) return;
    if(root->left || root->right) 
    node+=to_string(root->val)+"->";
    else{
        node+=to_string(root->val);
        ans.push_back(node);
    }
    Solve(root->left , ans , node);
    Solve(root->right , ans , node);
   }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string node="";
        Solve(root , ans , node);

        return ans;

    }
};