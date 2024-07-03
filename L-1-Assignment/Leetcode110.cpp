class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL) return 0;
        int leftHeight = height(root->left);
        if (leftHeight == -1) return -1; // Unbalanced
        int rightHeight = height(root->right);
        if (rightHeight == -1) return -1; // Unbalanced
        if (abs(leftHeight - rightHeight) > 1) return -1; // Unbalanced
        return max(leftHeight, rightHeight) + 1; // Height of the tree
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
