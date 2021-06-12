#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
  public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        int left = 0, right = x;
        while (left < right) {
            int mid = (left + right) / 2;
            if (x / mid >= mid)
                left = mid + 1;
            else
                right = mid;
        }
        return right - 1;
    }
};
// @lc code=end
