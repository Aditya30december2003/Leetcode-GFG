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
    int find(vector<int>& inorder, int inStart ,int inEnd , int target){
        for(int i=inStart;i<=inEnd;i++){
            if(inorder[i]==target)
            return i;
        }
        return -1;
    }
    TreeNode* Tree(vector<int>& preorder, vector<int>& inorder, int inStart ,int inEnd , int preIndex){
        if(inStart>inEnd)
        return NULL;

        TreeNode *root= new TreeNode(preorder[preIndex]);

        int index = find(inorder,inStart,inEnd, preorder[preIndex] );

        root->left = Tree(preorder , inorder , inStart , index-1 , preIndex+1);
        root->right= Tree(preorder , inorder, index+1 , inEnd , preIndex+(index-inStart)+1);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return Tree(preorder , inorder , 0 , inorder.size()-1 , 0); 
    }
};