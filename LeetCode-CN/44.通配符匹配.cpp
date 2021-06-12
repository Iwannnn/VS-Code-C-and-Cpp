#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=44 lang=cpp
 *
 * [44] 通配符匹配
 */

// @lc code=start
class Solution {
  public:
    bool isMatch(string s, string p) {
        // int i = 0, j = 0, iStar = -1, jStar = -1, m = s.size(), n = p.size();
        // while (i < m) {
        //     if (j < n && (s[i] == p[j] || p[j] == '?')) {
        //         i++;
        //         j++;
        //     } else if (j < n && p[j] == '*') {
        //         iStar = i;
        //         jStar = j++;
        //     } else if (iStar >= 0) {
        //         i = ++iStar;
        //         j = jStar + 1;
        //     } else
        //         return false;
        // }
        // while (j < n && p[j] == '*')
        //     j++;
        // return (j == n);
        int m = s.size(), n = p.size();
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        dp[0][0] = true;
        for (int i = 1; i <= n; ++i) {
            if (p[i - 1] == '*') dp[0][i] = dp[0][i - 1];
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else {
                    dp[i][j] = (s[i - 1] == p[j - 1] || p[j - 1] == '?') && dp[i - 1][j - 1];
                    // dp的ij和p,s的id对映的不是一个位置
                }
            }
        }
        return dp[m][n];
    }
};
// @lc code=en