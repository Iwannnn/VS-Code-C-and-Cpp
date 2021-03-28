#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
  public:
    void rotate(vector<vector<int>> &matrix) {
        reverse(matrix.begin(), matrix.end()); //先上下翻转再对角线转就是了
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i + 1; j < matrix.size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
// @lc code=end
