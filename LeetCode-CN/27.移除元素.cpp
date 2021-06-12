#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
  public:
    int removeElement(vector<int> &nums, int val) {
        int n = nums.size();
        int slow = 0, fast = 0;
        while (fast < n) {
            if (nums[fast] == val) {
                fast++;
            } else {
                nums[slow++] = nums[fast++];
            }
        }
        return nums.empty() ? 0 : (slow);
    }
};
// @lc code=end
