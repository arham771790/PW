
class Solution {
  public:
    int minValue(Node* root) {
        if(root==NULL)return INT_MAX;
        int minV=root->data;
        return min(minV,minValue(root->left));
        
    }
};