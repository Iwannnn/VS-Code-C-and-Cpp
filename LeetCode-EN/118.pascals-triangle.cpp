#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0) return {};
        vector<vector<int>> res(numRows, vector<int>());
        res[0].push_back(1);
        for (int i = 2; i <= numRows; ++i) {
            for (int j = 0; j < i; ++j) {
                if (j == 0) {
                    res[i - 1].push_back(res[i - 2][0]);
                    continue;
                }
                if (j == i - 1) {
                    res[i - 1].push_back(res[i - 2][i - 2]);
                    continue;
                }
                res[i - 1].push_back(res[i - 2][j - 1] + res[i - 2][j]);
            }
        }
        return res;
    }
};
// @lc code=end
