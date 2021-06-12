#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=201 lang=cpp
 *
 * [201] 数字范围按位与
 */

// @lc code=start
class Solution {
  public:
    int rangeBitwiseAnd(int left, int right) {
        int res = 0;
        int digtal = 31;
        while (digtal--) {
            int a = (left >> digtal) & 1;
            int b = (right >> digtal) & 1;
            if (a != b) break;
            if (a == 1) res = res | (1 << digtal);
        }
        return res;
    }
};
// @lc code=end
