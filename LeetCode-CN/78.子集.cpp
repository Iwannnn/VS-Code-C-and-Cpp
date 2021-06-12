#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> subsets(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> out;
        dfs(nums, 0, out, res);
        return res;
    }
    void dfs(vector<int> &nums, int start, vector<int> &out, vector<vector<int>> &res) {
        res.push_back(out);
        for (int i = start; i < nums.size(); ++i) {
            out.push_back(nums[i]);
            dfs(nums, i + 1, out, res);
            out.pop_back();
        }
    }
};
// @lc code=end
