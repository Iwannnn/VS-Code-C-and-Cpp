#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
  public:
    int hammingDistance(int x, int y) {
        int res = 0, mask = 0;
        for (int i = 0; i <= 31; ++i) {
            mask = (1 << i);
            if ((x & mask) != (y & mask)) ++res;
        }
        return res;
    }
};
// @lc code=end
