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
int find(vector<int>&inorder , int target , int InStart , int InEnd){
    for(int i=InStart ; i<=InEnd ; i++){
        if(target == inorder[i]){
            return i;
        }
    }
    return -1;
}
TreeNode *Tree(vector<int>&preorder  , vector<int>&inorder , int InStart , int InEnd , int index)
{
    if(InStart > InEnd)
    return NULL;
    TreeNode* root = new TreeNode(preorder[index]);

    int pos = find(inorder , preorder[index], InStart , InEnd); //find the root in inorder to divide
     
    //left
    root->left = Tree(preorder , inorder , InStart , pos-1 , index+1);
    //right
    root->right=Tree(preorder , inorder , pos+1 , InEnd , index+(pos-InStart)+1 );

    return root;
}
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex=0;
        return Tree(preorder , inorder , 0 , preorder.size()-1 , preIndex );
    }
};