#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=393 lang=cpp
 *
 * [393] UTF-8 编码验证
 */

// @lc code=start
class Solution {
  public:
    bool validUtf8(vector<int> &data) {
        int cnt = 0;
        for (auto d : data) {
            if (cnt == 0) {
                if ((d >> 5) == 0b110)
                    cnt = 1;
                else if ((d >> 4) == 0b1110)
                    cnt = 2;
                else if ((d >> 3) == 0b11110)
                    cnt = 3;
                else if (d >> 7)
                    return false;
            } else {
                if ((d >> 6) != 0b10) return false;
                --cnt;
            }
        }
        return cnt == 0;
    }
};
// @lc code=end
