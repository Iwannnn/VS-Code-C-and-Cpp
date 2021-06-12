#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution {
  public:
    void setZeroes(vector<vector<int>> &matrix) {
        if (matrix.empty() || matrix[0].empty()) return;
        int m = matrix.size(), n = matrix[0].size();
        bool rowZero = false, colZero = false;
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) rowZero = true;
        }
        for (int i = 0; i < n; i++) {
            if (matrix[0][i] == 0) colZero = true;
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (rowZero == true)
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        if (colZero == true)
            for (int i = 0; i < n; i++) {
                matrix[0][i] = 0;
            }
    }
};
// @lc code=end
