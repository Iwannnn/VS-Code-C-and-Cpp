#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
  public:
    int longestConsecutive(vector<int> &nums) {
        int res = 0;
        unordered_set<int> set(nums.begin(), nums.end());
        for (auto num : set) {
            int pre = num - 1, next = num + 1;
            while (set.erase(pre)) {
                --pre;
            }
            while (set.erase(next)) {
                ++next;
            }
            res = max(res, next - pre - 1);
        }
        return res;
    }
};
// @lc code=end
