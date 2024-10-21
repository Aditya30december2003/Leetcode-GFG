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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode* , long long >>q;
        q.push({root , 0});
        unsigned long long  maxWidth=0;
        while(!q.empty()){
            int n=q.size();
            unsigned long long  l=q.front().second;
            unsigned long long  r=q.back().second;
            maxWidth=max(maxWidth , r-l+1);

            while(n--){
                TreeNode* temp=q.front().first;
                unsigned long long  idx=q.front().second;
                q.pop();

                if(temp->left)
                q.push({temp->left , 2*idx+1});

                if(temp->right)
                q.push({temp->right , 2*idx+2});
            }
        }
        return maxWidth;
    }
};