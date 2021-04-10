#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1038 lang=cpp
 *
 * [1038] 把二叉搜索树转换为累加树
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
    TreeNode *bstToGst(TreeNode *root) {
        int res = 0;
        rdl(root, res);
        return root;
    }
    void rdl(TreeNode *node, int &res) {
        if (node == nullptr) return;
        if (node->right != nullptr) rdl(node->right, res);
        res += node->val;
        node->val = res;
        if (node->left != nullptr) rdl(node->left, res);
    }
};
// @lc code=end
