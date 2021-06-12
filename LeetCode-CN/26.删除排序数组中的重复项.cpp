#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        int slow = 0, fast = 0, n = nums.size();
        while (fast < n) {
            if (nums[slow] == nums[fast])
                fast++;
            else
                nums[++slow] = nums[fast++];
        }
        return nums.empty() ? 0 : (slow + 1);
    }
};
// @lc code=end
