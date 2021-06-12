#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
  public:
    int arrangeCoins(int n) {
        // return (int)((-1 + sqrt(1 + 8 * (long)n)) / 2);
        if (n <= 1) return n;
        long left = 1, right = n - 1;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            if (mid * (mid + 1) / 2 == n) return mid;
            if (mid * (mid + 1) / 2 < n)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left - 1;
    }
};
// @lc code=end
