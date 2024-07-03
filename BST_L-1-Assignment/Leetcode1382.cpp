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
    void array(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL)
        return;   
        if(root->left)array(root->left,ans);
        
        ans.push_back(root->val);
        
        if(root->right) array(root->right,ans);
    }
    TreeNode* helper(vector<int> &nums,int lo,int hi)
    {
        if(lo>hi)return NULL;
       int mid=lo+ (hi-lo)/2;
       TreeNode* root=new TreeNode(nums[mid]);
       root->left=helper(nums,lo,mid-1);
       root->right=helper(nums,mid+1,hi);
       return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        array(root,ans);
        int n=ans.size();
        return helper(ans,0,n-1);
        
    }
};