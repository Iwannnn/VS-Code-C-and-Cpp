#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
    int maxPathSum(TreeNode *root) {
        int res = INT_MIN;
        helper(root, res);
        return res;
    }
    int helper(TreeNode *node, int &res) {
        if (!node) return 0;
        int left = max(helper(node->left, res), 0);
        int right = max(helper(node->right, res), 0);
        res = max(res, left + right + node->val);
        return max(left, right) + node->val;
    }
};
// @lc code=end
