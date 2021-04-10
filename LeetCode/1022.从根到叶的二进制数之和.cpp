#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1022 lang=cpp
 *
 * [1022] 从根到叶的二进制数之和
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
    int sumRootToLeaf(TreeNode *root) {
        int res = 0;
        string bcode = "";
        dfs(root, bcode, res);
        return res;
    }
    void dfs(TreeNode *node, string bcode, int &res) {
        if (node == nullptr) return;
        bcode += (node->val + '0');
        if (node->left == nullptr && node->right == nullptr) {
            bitset<1020> bit(bcode);
            int num = bit.to_ullong();
            res += num;
            return;
        }
        dfs(node->left, bcode, res);
        dfs(node->right, bcode, res);
    }
};
// @lc code=end
