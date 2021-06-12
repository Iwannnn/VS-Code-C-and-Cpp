#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        dfs_1(nums, res, 0);
        return vector<vector<int>>(res.begin(), res.end());
    }
    void dfs_1(vector<int> &nums, set<vector<int>> &res, int start) {
        if (start >= nums.size()) res.insert(nums);
        for (int i = start; i < nums.size(); i++) {
            if (i != start && (nums[i] == nums[start])) continue;
            swap(nums[i], nums[start]);
            dfs_1(nums, res, start + 1);
            swap(nums[i], nums[start]);
        }
    }
    void dfs_2(vector<int> &nums, vector<vector<int>> &res, vector<int> &visited, vector<int> &out, int times) {
        if (times >= nums.size()) {
            res.push_back(out);
            return;
        }
        times++;
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] == 1) continue;
            if (i > 0 && nums[i] == nums[i - 1] && visited[i - 1] == 0) continue;
            visited[i] = 1;
            out.push_back(nums[i]);
            dfs_2(nums, res, visited, out, times);
            out.pop_back();
            visited[i] = 0;
        }
    }
};
// @lc code=end
