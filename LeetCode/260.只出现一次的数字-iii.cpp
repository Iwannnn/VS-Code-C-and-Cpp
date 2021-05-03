#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=260 lang=cpp
 *
 * [260] 只出现一次的数字 III
 */

// @lc code=start
class Solution {
  public:
    vector<int> singleNumber(vector<int> &nums) {
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        if (diff == -2147483648)
            diff = 1;
        else
            diff &= -diff;
        vector<int> res(2, 0);
        for (auto &num : nums) {
            if (num & diff)
                res[0] ^= num;
            else
                res[1] ^= num;
        }
        return res;
    }
};
// @lc code=end
