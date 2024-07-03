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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(!root)
        return ans;
        q.push(root);
        while(q.size()>0)
        {
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                v.push_back(temp->val);
                q.pop();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            if(ans.size()%2==1)
            reverse(v.begin(),v.end());

            ans.push_back(v);
    
        }

        return ans;
    }
};