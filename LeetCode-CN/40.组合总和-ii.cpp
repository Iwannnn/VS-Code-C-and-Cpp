#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, res, cur, 0, target);
        return res;
    }
    void dfs(vector<int> &candidates, vector<vector<int>> &res, vector<int> &cur, int start, int target) {
        if (target < 0) return;
        if (target == 0) {
            for (auto iter : res) {
                if (iter == cur) return;
            }
            res.push_back(cur);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            cur.push_back(candidates[i]);
            dfs(candidates, res, cur, i + 1, target - candidates[i]);
            cur.pop_back();
        }
    }
};
// @lc code=end
