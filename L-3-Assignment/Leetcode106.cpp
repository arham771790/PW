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
TreeNode* build(vector<int> & in,int inLo,int inHi,vector<int>&post,int postLo,int postHi)
    {
        if(inLo>inHi)
        return NULL;
        TreeNode* root=new TreeNode(post[postHi]);
        if(inLo==inHi)
        return root;
        int i=inLo;
        while(i<inHi)
        {
            if(in[i]==post[postHi])
            break;
            i++;
        }
        int leftCount=i-inLo;
        int rightCount=inHi-i;
        root->left=build(in,inLo,i-1,post,postLo,postLo+leftCount-1);
        root->right=build(in,i+1,inHi,post,postLo+leftCount,postHi-1);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        return build(inorder,0,n-1,postorder,0,n-1);      
    }
};