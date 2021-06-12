#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
  public:
    int findComplement(int num) {
        int res = 0;
        bool flag = false;

        for (int i = 31; i >= 0; --i) {
            bool plus = num & (1 << i);
            if (plus) {
                flag = true;
            }
            if (flag) {
                res |= plus ? (0 << i) : (1 << i);
            }
        }
        return res;
    }
};
// @lc code=end
