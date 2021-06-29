#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    vector<int> postorderTraversal(TreeNode *root) {
        if (root == nullptr) return {};
        vector<int> res;
        stack<TreeNode *> st{{root}};
        while (!st.empty()) {
            TreeNode *node = st.top();
            st.pop();
            res.insert(res.begin(), node->val);
            if (node->left) st.push(node->left);
            if (node->right) st.push(node->right);
        }
        return res;
    }
};
// @lc code=end
