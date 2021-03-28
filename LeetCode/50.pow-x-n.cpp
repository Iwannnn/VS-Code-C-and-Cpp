#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
  public:
    double myPow(double x, int n) {
        if (n == 0) return 1;
        if (n == 1) return x;
        if (x == 1) return 1;
        if (x == -1) return n % 2 == 0 ? 1 : -1;
        if (n < 0 && n > -2147483648) { // int范围 -2147483648--2147483647
            n = -n;
            x = 1 / x;
        }
        double res = myPow(x, n / 2);
        if (n % 2 == 0)
            return res * res;
        else
            return res * res * x;
    }
};
// @lc code=end
