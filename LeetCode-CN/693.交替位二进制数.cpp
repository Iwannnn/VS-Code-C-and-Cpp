#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=693 lang=cpp
 *
 * [693] 交替位二进制数
 */

// @lc code=start
class Solution {
  public:
    bool hasAlternatingBits(int n) {
        bool flag = false;
        int prev = 0;
        for (int i = 31; i >= 0; --i) {
            if (!flag) {
                if (n >> i) flag = true;
            }
            if (flag) {
                if (prev != ((n >> i) & 1))
                    prev = prev == 1 ? 0 : 1;
                else
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end
