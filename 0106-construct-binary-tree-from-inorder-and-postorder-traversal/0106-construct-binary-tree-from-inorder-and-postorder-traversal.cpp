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
int find(vector<int>& inorder , int target , int InStart , int InEnd ){
    for(int i=InStart ; i<=InEnd ; i++){
        if(target==inorder[i]){
            return i;
        }
    }
    return -1;
}
TreeNode* Tree(vector<int>& inorder, vector<int>& postorder , int InStart , int InEnd , int postIndex){
    if(InStart>InEnd)
    return NULL;

    TreeNode *root = new TreeNode(postorder[postIndex]);

    int pos = find(inorder , postorder[postIndex] , InStart , InEnd);
    
     //right
    root->right= Tree(inorder , postorder , pos+1 , InEnd , postIndex-1);
    //left
    root->left = Tree(inorder , postorder , InStart , pos-1 , postIndex-(InEnd-pos)-1);

    return root;
}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex=postorder.size()-1;
        return Tree(inorder , postorder , 0 , postorder.size()-1 , postIndex);
    }
};