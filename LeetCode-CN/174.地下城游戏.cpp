#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=174 lang=cpp
 *
 * [174] 地下城游戏
 */

// @lc code=start
class Solution {
  public:
    int calculateMinimumHP(vector<vector<int>> &dungeon) {
        int m = dungeon.size(), n = dungeon[0].size();
        vector<int> dp(n + 1, INT_MAX);
        dp[n - 1] = 1;
        for (int i = m - 1; i >= 0; i--)
            for (int j = n - 1; j >= 0; j--)
                dp[j] = max(1, min(dp[j], dp[j + 1]) - dungeon[i][j]);
        return dp[0];
    }
};
// @lc code=end
