#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
  public:
    int searchInsert(vector<int> &nums, int target) {
        int res = 0;
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                right = mid;
            else
                left = mid + 1;
        }
        res = right;
        return res;
    }
};
// @lc code=end
