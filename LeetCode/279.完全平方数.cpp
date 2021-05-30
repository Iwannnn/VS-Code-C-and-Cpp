#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=279 lang=cpp
 *
 * [279] 完全平方数
 */

// @lc code=start
class Solution {
  public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; i + j * j <= n; ++j) {
                dp[i + j * j] = min(dp[i] + 1, dp[i + j * j]);
            }
        }
        return dp.back();
    }
};
// @lc code=end
