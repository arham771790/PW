// Given two sorted arrays A and B, generate all possible arrays such that the first element is taken
// from A then from B then from A, and so on in increasing order till the arrays are exhausted. The
// generated arrays should end with an element from B.
// A = {10, 15, 25}
// B = {1, 5, 20, 30}
// Output: {10 20}, {10 20 25 30}, {10 30}, {15 20}, {15 20 25 30}, {15 30},
// {25 30}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> combine(vector<int> &A, vector<int> &B,vector<int> &) {
    
}

int main() {
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};
    vector<vector<int>> ans = combine(A, B);
    for (vector<int> v : ans) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}