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
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode* , ll>> q; // address and index
        q.push({root , 0});
        ll maxWidth=0;

        while(!q.empty()){
           int n=q.size();
           ll l = q.front().second; // left most node
           ll r = q.back().second;   // right most node
           maxWidth=max(maxWidth , r-l+1);


           while(n--){
            TreeNode *temp=q.front().first;
            ll index = q.front().second;
            q.pop();
            if(temp->left){
                q.push({temp->left , 2*index+1});
            }
            if(temp->right){
                q.push({temp->right , 2*index+2});
            }
           }
        }
        return maxWidth;
    }
};