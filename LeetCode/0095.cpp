#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode()
        : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x)
        : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
  public:
    vector<TreeNode *> generate(int beg, int end) {
        vector<TreeNode *> res;
        if (beg > end) {
            res.push_back(NULL);
            return res;
        }
        for (int i = beg; i <= end; i++) {
            vector<TreeNode *> lefttree = generate(beg, i - 1);
            vector<TreeNode *> righttree = generate(i + 1, end);
            for (int j = 0; j < lefttree.size(); j++) {
                for (int k = 0; k < righttree.size(); k++) {
                    TreeNode *node = new TreeNode(i + 1);
                    res.push_back(node);
                    node->left = lefttree[j];
                    node->right = righttree[k];
                }
            }
        }
        return res;
    }
    vector<TreeNode *> generateTrees(int n) {
        return generate(0, n - 1);
    }
};