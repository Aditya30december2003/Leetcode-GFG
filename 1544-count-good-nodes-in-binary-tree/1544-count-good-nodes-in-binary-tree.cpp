class Solution {
public:
    int goodNodes(TreeNode* root, int maxVal = INT_MIN) {
        if (!root) return 0;

        int count = 0;

        // If the current node's value is greater than or equal to the maximum value seen so far, it's a good node
        if (root->val >= maxVal) {
            count = 1;
        }

        // Update the maximum value seen so far
        maxVal = max(maxVal, root->val);

        // Recursively count good nodes in the left and right subtrees
        count += goodNodes(root->left, maxVal);
        count += goodNodes(root->right, maxVal);

        return count;
    }
};
