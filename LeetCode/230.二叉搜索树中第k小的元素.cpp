#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第K小的元素
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
    int res;
    int kthSmallest(TreeNode *root, int k) {
        dfs(root, k);
        return res;
    }
    void dfs(TreeNode *root, int &k) {
        if (!root) return;
        dfs(root->left, k);
        if (k == 0) return;
        k--;
        res = root->val;
        dfs(root->right, k);
    }
};
// @lc code=end
