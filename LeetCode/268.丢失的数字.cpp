#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            res ^= i ^ nums[i];
        }
        return res;
    }
};
// @lc code=end
