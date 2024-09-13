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
//  */   //0  -->1
//         1
//     1       2 -->2
//     2       3
//   3|  4|  5|  6| -->4  width = max(max ,right-left+1);
//   4   5   6   7
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        queue<pair<TreeNode* , long long>>q;
        q.push({root , 0});
        unsigned long long width=0;
        while(!q.empty()){
            unsigned long long n=q.size();
            unsigned long long left=q.front().second;
            unsigned long long right=q.back().second;
            width=max(width , right-left+1);
            while(n--){
              TreeNode *temp=q.front().first;
              unsigned long long index=q.front().second;
              q.pop();


              if(temp->left)
              q.push({temp->left , 2*index+1});

              if(temp->right)
              q.push({temp->right , 2*index+2});
            }
        }
        return width;
    }
};