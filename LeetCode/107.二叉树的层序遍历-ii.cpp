#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层序遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        if (!root) return {};
        vector<vector<int>> res;
        queue<TreeNode *> q{{root}};
        while (!q.empty()) {
            vector<int> levelNode;
            for (int i = q.size(); i > 0; --i) {
                TreeNode *node = q.front();
                q.pop();
                levelNode.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(levelNode);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
