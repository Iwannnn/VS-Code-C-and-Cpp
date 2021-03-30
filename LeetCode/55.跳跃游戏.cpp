#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
  public:
    bool canJump(vector<int> &nums) {
        // bool res = false;
        // dfs(nums, 0, res);
        // return res; //!dfs依旧超时

        // vector<int> dp(nums.size(), 0); //!dp
        // for (int i = 1; i < nums.size(); i++) {
        //     dp[i] = max(dp[i - 1], nums[i - 1]) - 1; //!走到当前位置最远能走到哪
        //     if (dp[i] < 0) return false;
        // }
        // return true;

        int reachMax = 0; //! greef
        for (int i = 0; i < nums.size(); i++) {
            if (i > reachMax || reachMax >= nums.size()) break;
            reachMax = max(reachMax, i + nums[i]);
        }
        return reachMax >= nums.size() - 1;
    }
    /*void dfs(vector<int> &nums, int cur, bool &res) {
        if (cur == nums.size() - 1) {
            res = true;
            return;
        }
        if (nums[cur] == 0) return;
        for (int i = 1; i <= nums[cur]; i++) {
            if (cur + i <= nums.size() - 1) dfs(nums, cur + i, res);
        }
    }*/
};
// @lc code=end
