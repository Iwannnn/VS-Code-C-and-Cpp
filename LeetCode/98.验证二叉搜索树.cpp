#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start

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
    bool isValidBST(TreeNode *root) {
        return judge(root, LONG_MIN, LONG_MAX);
    }
    bool judge(TreeNode *root, long min, long max) {
        if (!root) return true;
        if (root->val <= min || root->val >= max) return false;
        return judge(root->left, min, root->val) && judge(root->right, root->val, max);
    }
};
// @lc code=end
