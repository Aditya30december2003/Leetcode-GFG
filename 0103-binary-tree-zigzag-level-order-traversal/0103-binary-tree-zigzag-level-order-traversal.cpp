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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
        return ans;

        queue<TreeNode*>q;

        q.push(root);
        bool leftToright = true;

        while(!q.empty()){
            int n=q.size();
            deque<int>dq;
           while(n--){
            TreeNode* temp=q.front();
            q.pop();

            if(leftToright){
                dq.push_back(temp->val);
            }
            else{
                dq.push_front(temp->val);
            }

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
           }

           ans.push_back(vector<int>(dq.begin() , dq.end()));
           leftToright = !leftToright;
        }
    return ans;
    }
};