#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

bool isBadVersion(int version);
// @lc code=start

class Solution {
  public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid))
                if (!isBadVersion(mid - 1))
                    return mid;
                else
                    right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
// @lc code=end
