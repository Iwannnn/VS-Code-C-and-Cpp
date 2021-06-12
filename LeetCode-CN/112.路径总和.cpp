#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode *root, int targetSum) {
        // if (!root) return false;
        // if (!root->left && !root->right && root->val == targetSum) return true;
        // return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
        if (!root) return false;
        stack<TreeNode *> st{{root}};
        while (!st.empty()) {
            TreeNode *t = st.top();
            st.pop();
            if (!t->left && !t->right) {
                if (t->val == targetSum) return true;
            }
            if (t->right) {
                t->right->val += t->val;
                st.push(t->right);
            }
            if (t->left) {
                t->left->val += t->val;
                st.push(t->left);
            }
        }
        return false;
    }
};
// @lc code=end
