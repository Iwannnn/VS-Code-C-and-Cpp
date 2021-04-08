#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=357 lang=cpp
 *
 * [357] 计算各个位数不同的数字个数
 */

// @lc code=start
class Solution {
  public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int res = 10, cnt = 9;
        for (int i = 2; i <= n; i++) {
            cnt *= (11 - i);
            res += cnt;
        }
        return res;
    }
};
// @lc code=end
