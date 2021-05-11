#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=376 lang=cpp
 *
 * [376] 摆动序列
 */

// @lc code=start
class Solution {
  public:
    int wiggleMaxLength(vector<int> &nums) {
        int small = 1, big = 1, n = nums.size();
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1])
                big = small + 1;
            else if (nums[i] < nums[i - 1])
                small = big + 1;
        }
        return min(n, max(small, big));
    }
};
// @lc code=end
