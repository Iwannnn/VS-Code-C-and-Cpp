#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] 两整数之和
 */

// @lc code=start
class Solution {
  public:
    int getSum(int a, int b) {
        // a为本位和 b为进位
        return b == 0 ? a : getSum(a ^ b, (a & b & 0x7fffffff) << 1);
    }
};
// @lc code=end
