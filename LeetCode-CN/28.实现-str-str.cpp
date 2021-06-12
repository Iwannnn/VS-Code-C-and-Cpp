#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
  public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        int n = haystack.size(), l = needle.size();
        if (n < l) return -1;
        for (int i = 0; i <= n - l; i++) {
            int j = 0;
            for (j = 0; j < l; j++) {
                if (haystack[i + j] != needle[j]) break;
            }
            if (j == l) return i;
        }
        return -1;
    }
};
// @lc code=end
