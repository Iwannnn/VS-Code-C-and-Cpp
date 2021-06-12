#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        if (nums.empty()) return {};
        vector<vector<int>> res;
        vector<int> out;
        sort(nums.begin(), nums.end());
        dfs(nums, 0, res, out);
        return res;
    }
    void dfs(vector<int> &nums, int start, vector<vector<int>> &res, vector<int> &out) {
        res.push_back(out);
        for (int i = start; i < nums.size(); i++) {
            out.push_back(nums[i]);
            dfs(nums, i + 1, res, out);
            out.pop_back();
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }
    }
};
// @lc code=end
