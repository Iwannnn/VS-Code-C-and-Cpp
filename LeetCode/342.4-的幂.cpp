#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
  public:
    bool isPowerOfFour(int n) {
        // return n > 0 && !(n & n - 1) && (n - 1) % 3 == 0;
        //先是2 在能被3mod
        if (n < 0) return false;
        bool res = false;
        int digit = 31;
        int index = 0;
        while (digit--) {
            if ((n >> digit & 1) == 1) {
                if (res == false) {
                    res = true;
                    index = digit;
                } else {
                    return false;
                }
            }
        }
        if (index % 2 == 0)
            return res;
        else
            return false;
    }
};
// @lc code=end
