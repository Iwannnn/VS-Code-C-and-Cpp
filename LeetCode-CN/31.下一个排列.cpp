#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
  public:
    void nextPermutation(vector<int> &nums) {
        int i, j, n = nums.size();
        for (i = n - 2; i >= 0; i--) {
            if (nums[i + 1] > nums[i]) {
                for (j = n - 1; j > i; j--) {
                    if (nums[j] > nums[i])
                        break;
                }
                swap(nums[i], nums[j]);
                reverse(nums.begin() + i + 1, nums.end());
                return;
            }
        }

        reverse(nums.begin(), nums.end());
    }
};
// @lc code=end
