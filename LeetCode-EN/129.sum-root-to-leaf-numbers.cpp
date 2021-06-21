#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    int sumNumbers(TreeNode *root) {
        if (!root) return 0;
        int res = 0, cur = root->val;
        helper(root, res, cur);
        return res;
    }
    void helper(TreeNode *node, int &res, int cur) {
        if (!node->left && !node->right) {
            res += cur;
            return;
        }
        if (node->left) {
            helper(node->left, res, cur * 10 + node->left->val);
        }
        if (node->right) {
            helper(node->right, res, cur * 10 + node->right->val);
        }
    }
};
// @lc code=end
