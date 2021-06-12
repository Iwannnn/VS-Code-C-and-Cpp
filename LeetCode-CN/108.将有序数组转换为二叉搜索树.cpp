#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode()
        : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x)
        : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
  public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        if (nums.empty()) return nullptr;
        int mid_index = nums.size() / 2;
        TreeNode *root = new TreeNode(nums[mid_index]);
        vector<int> left(nums.begin(), nums.begin() + mid_index);
        vector<int> right(nums.begin() + mid_index + 1, nums.end());
        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        return root;
    }
};
// @lc code=end
