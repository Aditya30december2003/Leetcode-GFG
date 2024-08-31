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
    int find(vector<int>& inorder , int inStart , int inEnd , int target){
        for(int i=inStart ; i<=inEnd ; i++){
            if(inorder[i] == target)
            return i;
        }
        return -1;
    }
    TreeNode* Tree(vector<int>&preorder, vector<int>&inorder , int inStart , int inEnd , int pre){
       if(inStart>inEnd)
       return NULL;

       TreeNode *root = new TreeNode(preorder[pre]);
       int index = find(inorder , inStart , inEnd , preorder[pre]);
       root->left = Tree(preorder , inorder , inStart , index-1 , pre+1);
       root->right = Tree(preorder , inorder , index+1 , inEnd , pre+(index-inStart)+1);

       return root; 
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Tree(preorder , inorder , 0 , inorder.size()-1 , 0);
    }
};