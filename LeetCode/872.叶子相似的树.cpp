#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=872 lang=cpp
 *
 * [872] 叶子相似的树
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
    bool leafSimilar(TreeNode *root1, TreeNode *root2) {
        vector<int> num1;
        vector<int> num2;
        dfs(root1, num1);
        dfs(root2, num2);
        return num1 == num2;
    }
    void dfs(TreeNode *node, vector<int> &num) {
        if (node == nullptr) return;
        if (node->left == nullptr && node->right == nullptr) {
            num.push_back(node->val);
            return;
        }
        dfs(node->left, num);
        dfs(node->right, num);
    }
};
// @lc code=end
