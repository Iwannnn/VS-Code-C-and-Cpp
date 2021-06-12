#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        if (target < matrix[0][0] || target > matrix.back().back()) return false;
        int x = 0, y = matrix[0].size() - 1;
        while (true) {
            if (matrix[x][y] > target)
                y--;
            else if (matrix[x][y] < target)
                x++;
            else
                return true;
            if (x >= matrix.size() || y < 0) return false;
        }
    }
};
// @lc code=end
