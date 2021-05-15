#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
  public:
    string toHex(int num) {
        string res = "", map = "0123456789abcdef";
        int cnt = 0;
        while (num != 0 && cnt++ < 8) { //符号位不移动
            res = map[num & 0xf] + res;
            num >>= 4;
        }
        return res.empty() ? "0" : res;
    }
};
// @lc code=end
