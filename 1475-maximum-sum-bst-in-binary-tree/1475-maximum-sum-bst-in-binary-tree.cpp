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
class Container {
public:
    bool isBST;
    int sum, min, max;
    Container(int data) {
        isBST = true;
        sum = data;
        min = max = data;
    }
};

class Solution {
private:
    Container* findSum(TreeNode *root, int &totalSum) {
        
        if (!root) {
            return new Container(0); 
        }

        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            totalSum = max(totalSum, root->val);
            return new Container(root->val);
        }

        Container *leftSub = findSum(root->left, totalSum);
        Container *rightSub = findSum(root->right, totalSum);

        // Both children exist and need to check BST properties
        if (leftSub->isBST && rightSub->isBST &&
            (root->left == NULL || leftSub->max < root->val) &&
            (root->right == NULL || rightSub->min > root->val)) {

            Container* head = new Container(root->val);
            head->sum += leftSub->sum + rightSub->sum;
            head->min = (root->left ? leftSub->min : root->val);
            head->max = (root->right ? rightSub->max : root->val);
            totalSum = max(totalSum, head->sum);
            return head;
        }

        // If it's not a BST, mark the subtree as invalid
        Container* invalidContainer = new Container(0);
        invalidContainer->isBST = false;
        return invalidContainer;
    }

public:
    int maxSumBST(TreeNode* root) {
        int maxSum = 0;
        findSum(root, maxSum);
        return maxSum;
    }
};
