#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // int m = matrix.size(), n = matrix[0].size();
        // int i = 0, j = m - 1, midRow = 0, midCol = 0;
        // while (i <= j) {
        //     midRow = (i + j) / 2;
        //     if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
        //         break;
        //     else if (target < matrix[midRow][0])
        //         j = midRow - 1;
        //     else if (target > matrix[midRow][n - 1])
        //         i = midRow + 1;
        // }
        // i = 0, j = n - 1;
        // while (i <= j) {
        //     midCol = (i + j) / 2;
        //     if (target == matrix[midRow][midCol])
        //         break;
        //     else if (target < matrix[midRow][midCol])
        //         j = midCol - 1;
        //     else if (target > matrix[midRow][midCol])
        //         i = midCol + 1;
        // }
        // return (target == matrix[midRow][midCol]);
        if (matrix.empty() || matrix[0].empty()) return false;
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m * n;
        while (left < right) {
            int mid = (left + right) / 2;
            if (matrix[mid / n][mid % n] == target) return true;
            if (matrix[mid / n][mid % n] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return false;
    }
};
// @lc code=end
