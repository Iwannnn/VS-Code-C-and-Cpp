#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
class Solution {
  public:
    int findMin(vector<int> &nums) {
        int left = 0, right = nums.size() - 1;
        int min = INT_MAX;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] < min) min = nums[mid];
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else if (nums[mid] < nums[right]) {
                right = mid - 1;
            } else
                right--;
        }
        return min;
    }
};
// @lc code=end
