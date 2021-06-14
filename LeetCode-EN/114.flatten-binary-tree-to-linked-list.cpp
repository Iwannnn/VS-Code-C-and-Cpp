#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
    void flatten(TreeNode *root) {
        if (!root) return;
        if (root->left) flatten(root->left);
        if (root->right) flatten(root->right);
        TreeNode *temp = root->right;
        root->right = root->left;
        root->left = nullptr;
        while (root->right)
            root = root->right;
        root->right = temp;
    }
};
// @lc code=end
