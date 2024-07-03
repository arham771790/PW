#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// Function to display the tree
void display(Node *root) {
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
// Function to traverse the tree and store nodes in level order from right to left
vector<vector<int>> righttoLeft(Node *root, vector<vector<int>> & ans) {
    queue<Node *> q;
    q.push(root);
    if (!root)
        return ans;
    while (q.size() > 0) {
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            Node *temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        reverse(v.begin(), v.end());
        ans.push_back(v);
    }
    return ans;
}
// Function to display the tree in level-order using queue
void displayTree(Node* root) {
    if (!root)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->val << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
}
int main() {
    vector<vector<int>> ans;
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout << "Original tree:" << endl;
    displayTree(a);
    cout << endl;
    righttoLeft(a, ans);
    cout << "Level order from right to left:" << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
