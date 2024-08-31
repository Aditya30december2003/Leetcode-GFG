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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;

        while(!q.empty()){
            int n=q.size();
            vector<int>arr;
            while(n--){
                TreeNode* temp = q.front();
                arr.push_back(temp->val);
                q.pop();

                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);
            }
          ans.push_back(arr);
        }
        int a = ans[ans.size()-1][0];
        return a;
    }
};