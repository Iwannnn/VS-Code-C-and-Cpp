#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
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
    int countNodes(TreeNode *root) {
        int hLeft = leftHeight(root);
        int hRight = rightHeight(root);
        if (hRight == hLeft) return pow(2, hLeft) - 1;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
    int leftHeight(TreeNode *root) {
        if (!root) return 0;
        return 1 + leftHeight(root->left);
    }
    int rightHeight(TreeNode *root) {
        if (!root) return 0;
        return 1 + rightHeight(root->right);
    }
};
// @lc code=end
