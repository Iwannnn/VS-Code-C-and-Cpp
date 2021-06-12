#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> out;
        dfs(res, out, 1, n, k);
        return res;
    }
    void dfs(vector<vector<int>> &res, vector<int> &out, int start, int n, int k) {
        if (out.size() == k) {
            res.push_back(out);
            return;
        }
        for (int i = start; i <= n; i++) {
            out.push_back(i);
            dfs(res, out, i + 1, n, k);
            out.pop_back();
        }
    }
};
// @lc code=end
