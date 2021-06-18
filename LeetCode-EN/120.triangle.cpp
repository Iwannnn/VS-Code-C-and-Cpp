#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
  public:
    int minimumTotal(vector<vector<int>> &triangle) {
        // vector<int> dp(triangle.back());
        // for (int i = triangle.size() - 2; i >= 0; --i) {
        //     for (int j = 0; j <= i; j++) {
        //         dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
        //     }
        // }
        // return dp[0];
        for (int i = 1; i < triangle.size(); ++i) {
            for (int j = 0; j < triangle[i].size(); ++j) {
                if (j == 0) {
                    triangle[i][j] += triangle[i - 1][j];
                } else if (j == triangle[i].size() - 1) {
                    triangle[i][j] += triangle[i - 1][j - 1];
                } else {
                    triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
                }
            }
        }
        return *min_element(triangle.back().begin(), triangle.back().end());
    }
};
// @lc code=end
