
class Solution {
public:
    int helper(TreeNode* root ,int low,int high,int &sum)
    {
        if(root==NULL)return 0;
        
        
        helper(root->left,low,high,sum);
        if(root->val>=low && root->val<=high)
        sum+=root->val;
        helper(root->right,low,high,sum);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {        
    int sum=0;
    helper(root,low,high,sum);        

        

      return sum;
    }
};