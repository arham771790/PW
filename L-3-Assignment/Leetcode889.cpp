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
    TreeNode* InorderBuild(vector<int> preorder,int preLo,int preHi,vector<int> postorder,int postLo,int postHi)
    {   
       if (preLo > preHi || postLo > postHi) 
            return nullptr;

        // Create the root node
        TreeNode* root = new TreeNode(preorder[preLo]);

        // Base case for a single node
        if (preLo == preHi)
            return root;
        int postIdx=postLo;
        while(postIdx<postHi)
        {
           if(preorder[preLo+1]==postorder[postIdx])
           break;
           postIdx++;
        }
        int len=postIdx-postLo+1;
        root->left=InorderBuild(preorder,preLo+1,preLo+len,postorder,postLo,postIdx);
        root->right=InorderBuild(preorder,preLo+len+1,preHi,postorder,postIdx+1,postHi-1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n=preorder.size();
        return InorderBuild(preorder,0,n-1,postorder,0,n-1);
    
    }
};