#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> out;
        dfs(k, n, 1, res, out);
        return res;
    }
    void dfs(int k, int n, int start, vector<vector<int>> &res, vector<int> &out) {
        if (n < 0) return;
        if (n == 0 && out.size() == k) res.push_back(out);
        for (int i = start; i <= 9; i++) {
            out.push_back(i);
            dfs(k, n - i, i + 1, res, out);
            out.pop_back();
        }
    }
};
// @lc code=end
