#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
  public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (!isValue(s[left]))
                ++left;
            else if (!isValue(s[right]))
                --right;
            else if ((s[left] + 32 - 'a') % 32 != (s[right] + 32 - 'a') % 32)
                return false;
            else {
                ++left;
                --right;
            }
        }
        return true;
    }
    bool isValue(char &ch) {
        if (ch >= 'a' && ch <= 'z') return true;
        if (ch >= 'A' && ch <= 'Z') return true;
        if (ch >= '0' && ch <= '9') return true;
        return false;
    }
};
// @lc code=end
