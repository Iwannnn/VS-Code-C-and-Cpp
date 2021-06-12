#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, len = 0, maxl = 0;
        int size = s.size();
        while (end < size) {
            char tmpChar = s[end];
            for (int index = start; index < end; index++) {
                if (tmpChar == s[index]) {
                    start = index + 1;
                    len = end - start;
                    break;
                }
            }
            end++;
            len++;
            maxl = max(len, maxl);
        }
        return maxl;
    }
};
// @lc code=end
