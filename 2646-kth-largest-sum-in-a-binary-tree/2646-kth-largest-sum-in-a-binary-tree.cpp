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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>sumArr;
        if(!root) return 0;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            long long sum=0;

            while(n--){
            TreeNode* temp=q.front();
            sum+=temp->val;
            q.pop();

            if(temp->left)
            q.push(temp->left);
            
            if(temp->right)
            q.push(temp->right);

            }
        sumArr.push_back(sum);
        }

        sort(sumArr.begin() , sumArr.end());
        if (k > sumArr.size()) return -1;
        
        return sumArr[sumArr.size()-k];
    }
};