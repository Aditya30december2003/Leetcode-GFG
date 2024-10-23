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
    TreeNode* Tree(vector<int>& preorder , int low , int upper , int&index){
        if(index==preorder.size()||preorder[index]<low||preorder[index]>upper)
        return NULL;

        TreeNode *root=new TreeNode(preorder[index++]);
        root->left=Tree(preorder , low , root->val , index);
        root->right=Tree(preorder , root->val , upper , index);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return Tree(preorder , INT_MIN , INT_MAX , index);
    }
};