#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        int res = nums[0], dp = nums[0];
        // dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            // if (dp[i - 1] > 0) {
            //     dp[i] = nums[i] + dp[i - 1];
            // } else {
            //     dp[i] = nums[i]; //!重开连续
            // }
            dp = max(nums[i], dp + nums[i]);
            res = max(res, dp);
        }
        return res;
        // if (nums.size() == 1) return nums[0];
        // int res = nums[0], curSum = 0, i = 0;
        // while (i < nums.size()) {
        //     curSum += nums[i];
        //     if (curSum > res) res = curSum;
        //     if (curSum < 0) curSum = 0;
        //     i++;
        // }
        // return res;
    }
};
// @lc code=end
