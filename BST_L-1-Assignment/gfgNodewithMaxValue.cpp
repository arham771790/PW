//C++ code to implement the morris traversal approach
#include <climits>
#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x)
		: val(x)
		, left(NULL)
		, right(NULL)
	{
	}
};

int findMaxNode(TreeNode* root)
{
	int max_val = INT_MIN;
	TreeNode* curr = root;
	while (curr != NULL) {
		if (curr->left == NULL) {
			// If the left subtree is NULL, update the
			// maximum value seen so far
			max_val = max(max_val, curr->val);
			curr = curr->right; // Visit the right subtree
		}
		else {
			// Find the predecessor of the current node
			TreeNode* pred = curr->left;
			while (pred->right != NULL
				&& pred->right != curr) {
				pred = pred->right;
			}
			if (pred->right == NULL) {
				// Set the predecessor's right child to the
				// current node
				pred->right = curr;
				curr = curr->left; // Visit the left subtree
			}
			else {
				// The predecessor's right child is already
				// set to the current node, indicating that
				// we have visited the left subtree of the
				// current node
				pred->right
					= NULL; // Restore the predecessor's
							// right child
				max_val
					= max(max_val,
						curr->val); // Update the maximum
									// value seen so far
				curr = curr->right; // Visit the right
									// subtree
			}
		}
	}
	return max_val;
}

int main()
{
	/* Create a binary search tree

		8
		/ \
	3 10
	/ \	 \
	1 6 14
		/ \ /
	4 7 13
	*/

	TreeNode* root = new TreeNode(8);
	root->left = new TreeNode(3);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(6);
	root->left->right->left = new TreeNode(4);
	root->left->right->right = new TreeNode(7);
	root->right = new TreeNode(10);
	root->right->right = new TreeNode(14);
	root->right->right->left = new TreeNode(13);

	// Find the node with maximum value in the binary search
	// tree
	int max_val = findMaxNode(root);

	// Output the result
	cout << "The node with maximum value in the binary "
			"search tree is "
		<< max_val << endl;

	return 0;
}
// This code is contributed by Veerendra_Singh_Rajpoot
