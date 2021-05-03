#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
  public:
    bool isPowerOfTwo(int n) {
        if (n < 0) return false;
        int res = false;
        int digit = 31;
        while (digit--) {
            int cur = (n >> digit) & 1;
            if (res == false && cur == 1) {
                res = true;
            } else if (res == true && cur == 1) {
                return false;
            }
        }
        return res;
        // return (n > 0 && !(n & (n - 1)));
    }
};
// @lc code=end
