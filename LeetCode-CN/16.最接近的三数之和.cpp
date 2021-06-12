#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
  public:
    int threeSumClosest(vector<int> &nums, int target) {
        int res = (100000);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (int)nums.size() - 2; i++) {
            int j = i + 1, k = (int)nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == target) {
                    return target;
                } else if (nums[i] + nums[j] + nums[k] < target) {
                    res = abs(target - res) < abs(target - (nums[i] + nums[j] + nums[k])) ? res : (nums[i] + nums[j] + nums[k]);
                    j++;
                } else {
                    res = abs(target - res) < abs(target - (nums[i] + nums[j] + nums[k])) ? res : (nums[i] + nums[j] + nums[k]);
                    k--;
                }
            }
        }
        return res;
    }
};
// @lc code=end