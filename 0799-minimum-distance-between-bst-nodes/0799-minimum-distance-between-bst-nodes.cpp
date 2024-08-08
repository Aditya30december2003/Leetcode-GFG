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
private:
void inorder(TreeNode *root , vector<int>&arr){
    if(!root) return;
    inorder(root->left , arr);
    arr.push_back(root->val);
    inorder(root->right , arr);
}
public:
    int minDiffInBST(TreeNode* root) {
        vector<int>arr;
        inorder(root , arr);

        int minDis = INT_MAX;
        for(int i=1;i<arr.size();i++){
            int diff = abs(arr[i]-arr[i-1]);
            minDis = min(minDis , diff);
        }
        return minDis;
    }
};