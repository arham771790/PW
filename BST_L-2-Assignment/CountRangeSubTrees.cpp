// Given a BST, count subtrees in it whose nodes lie within a given range.
#include <iostream>
#include <queue>
#include <climits>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

class Solution
{
public:
    int ans = 0;
    bool helper(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return true;
        bool l = helper(root->left, low, high);
        bool r = helper(root->right, low, high);
        if (l && r && low <= root->val && root->val <= high)
        {
            ans++;
            return true;
        }
        return false;
    }
    int getCount(TreeNode *root, int low, int high)
    {
        int count = 0;
        helper(root, low, high);
        return count;
    }
};
int main()
{
}