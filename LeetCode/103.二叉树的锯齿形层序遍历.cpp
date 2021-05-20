#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层序遍历
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        if (!root) return {};
        vector<vector<int>> res;
        queue<TreeNode *> q{{root}};
        int level = 0;
        while (!q.empty()) {
            vector<int> levelNode;
            for (int i = q.size(); i > 0; --i) {
                TreeNode *node = q.front();
                q.pop();
                levelNode.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (level % 2 == 1) reverse(levelNode.begin(), levelNode.end());
            res.push_back(levelNode);
            ++level;
        }
        return res;
    }
};
// @lc code=end
