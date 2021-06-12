#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=894 lang=cpp
 *
 * [894] 所有可能的满二叉树
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {
    }
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {
    }
};

// @lc code=start

class Solution {
  public:
    vector<TreeNode *> allPossibleFBT(int n) {
        vector<TreeNode *> res;
        return search(n);
    }

    vector<TreeNode *> search(int n) {
        if (n == 1) return {new TreeNode(0)};
        vector<TreeNode *> res;
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode *> left = search(i);
            vector<TreeNode *> right = search(n - i - 1);
            if (!left.size() && !right.size()) res.push_back(new TreeNode(0));
            for (TreeNode *lnode : left) {
                for (TreeNode *rnode : right) {
                    TreeNode *root = new TreeNode(0);
                    root->left = lnode;
                    root->right = rnode;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
// @lc code = end