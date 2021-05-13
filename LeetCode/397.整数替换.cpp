#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=397 lang=cpp
 *
 * [397] 整数替换
 */

// @lc code=start
class Solution {
  public:
    int integerReplacement(int n) {
        long long int t = n;
        int res = 0;
        if (n == 1) return 0;
        while (t > 1) {
            if ((t & 1)) {
                if (t & 2 && t != 3) //对于3来说-1更好 四的倍数可以直接除了
                    ++t;
                else
                    --t;
            } else {
                t >>= 1;
            }

            ++res;
        }

        return res;
    }
};
// @lc code=end
