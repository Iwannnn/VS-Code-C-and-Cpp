#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        dfs_1(nums, 0, res);
        return res;
    }
    void dfs_1(vector<int> &nums, int start, vector<vector<int>> &res) {
        if (start >= nums.size()) res.push_back(nums);
        for (int i = start; i < nums.size(); i++) {
            swap(nums[i], nums[start]);
            dfs_1(nums, start + 1, res);
            swap(nums[i], nums[start]);
        }
    }
    void dfs_2(vector<int> &nums, vector<vector<int>> &res, vector<int> &visited, vector<int> &out, int times) {
        if (times == nums.size()) res.push_back(out);
        times++;
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] == 1) continue; //之前传入的visited数字
            visited[i] = 1;
            out.push_back(nums[i]);
            dfs_2(nums, res, visited, out, times);
            visited[i] = 0; //避免以后的干扰，用完变成不用的了不用留着以后用
        }
    }
};
// @lc code=end
