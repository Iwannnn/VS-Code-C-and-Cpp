#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
  public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int after = 0;
        while (x > after) {
            after = after * 10 + x % 10;
            x /= 10;
        }
        return x == after || x == after / 10;
    }
};
// @lc code=end
