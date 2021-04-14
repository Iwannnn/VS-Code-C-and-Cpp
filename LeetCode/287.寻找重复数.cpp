#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数
 */

// @lc code=start
class Solution {
  public:
    int findDuplicate(vector<int> &nums) {
        // int slow = 0, fast = 0, t = 0;
        // while (true) {
        //     slow = nums[slow];
        //     fast = nums[nums[fast]];
        //     if (slow == fast) break;
        // }
        // while (true) {
        //     slow = nums[slow];
        //     t = nums[t];
        //     if (slow == t) break;
        // }
        // return slow;
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int cnt = 0;
            for (int num : nums) {
                if (num <= mid) cnt++;
            }
            if (cnt <= mid)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};
// @lc code=end
