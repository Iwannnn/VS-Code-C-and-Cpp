#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
  public:
    int lengthOfLastWord(string s) {
        int res = 0, n = s.size();
        bool start = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                start = true;
                res++;
            } else if (start == true) {
                return res;
            }
        }
        return res;
    }
};
// @lc code=end
