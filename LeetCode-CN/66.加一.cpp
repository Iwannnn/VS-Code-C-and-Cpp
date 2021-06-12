#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int i = digits.size() - 1;
        digits[i] += 1;
        while (i > 0 && digits[i] == 10) {
            digits[i] = 0;
            digits[--i] += 1;
        }
        if (i == 0 && digits[i] == 10) {
            digits[i] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
// @lc code=end
