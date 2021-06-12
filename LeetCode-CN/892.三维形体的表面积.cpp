#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=892 lang=cpp
 *
 * [892] 三维形体的表面积
 */

// @lc code=start
class Solution {
  public:
    int surfaceArea(vector<vector<int>> &grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0) {
                    res += 4 * grid[i][j] + 2;
                    if (i > 0) res -= min(grid[i - 1][j], grid[i][j]) * 2;
                    if (j > 0) res -= min(grid[i][j - 1], grid[i][j]) * 2;
                }
            }
        }
        return res;
    }
};
// @lc code=end
