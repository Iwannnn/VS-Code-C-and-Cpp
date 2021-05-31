#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    bool isBalanced(TreeNode *root) {
        if (getDepth(root) == -1)
            return false;
        else
            return true;
    }
    int getDepth(TreeNode *root) {
        if (!root) return 0;
        int left = getDepth(root->left);
        if (left == -1) return -1;
        int right = getDepth(root->right);
        if (right == -1) return -1;
        int diff = abs(left - right);
        if (diff > 1)
            return -1;
        else
            return 1 + max(left, right);
    }
};
// @lc code=end
