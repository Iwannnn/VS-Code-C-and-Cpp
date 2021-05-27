#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 二叉树的右视图
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
    vector<int> rightSideView(TreeNode *root) {
        vector<int> res;
        if (!root) return {};
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            res.push_back(q.back()->val);
            for (int i = q.size(); i > 0; i--) {
                TreeNode *node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return res;
    }
};
// @lc code=end
