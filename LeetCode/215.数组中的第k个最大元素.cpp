#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
class Solution {
  public:
    int findKthLargest(vector<int> &nums, int k) {
        // int left = 0, right = nums.size() - 1;
        // while (true) {
        //     int pos = partition(nums, left, right);
        //     if (pos == k - 1) return nums[pos];
        //     if (pos > k - 1)
        //         right = pos - 1;
        //     else
        //         left = pos + 1;
        // }
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
    // int partition(vector<int> &nums, int left, int right) {
    //     //从大到小配置
    //     int cur = nums[left], l = left + 1, r = right;
    //     while (l <= r) {
    //         if (nums[l] < cur && nums[r] > cur) {
    //             swap(nums[l++], nums[r--]);
    //         }
    //         if (nums[l] >= cur) ++l;
    //         if (nums[r] <= cur) --r;
    //     }
    //     swap(nums[left], nums[r]);
    //     return r;
    // }
};
// @lc code=end
