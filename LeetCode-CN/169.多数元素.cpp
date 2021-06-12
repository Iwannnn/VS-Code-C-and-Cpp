#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        int res = 0;
        // for (int i = 0; i < 32; i++) {
        //     int one = 0, zero = 0;
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (one > nums.size() / 2 || zero > nums.size() / 2) {
        //             break;
        //         }
        //         if ((nums[j] & (1 << i)) != 0)
        //             one++;
        //         else
        //             zero++;
        //     }
        //     if (one > zero) {
        //         res |= (1 << i);
        //     }
        // }
        int count = 0;
        for (auto num : nums) {
            if (count == 0)
                res = num, count++;
            else if (num == res)
                count++;
            else if (num != res)
                count--;
        }

        return res;
    }
};
// @lc code=end
