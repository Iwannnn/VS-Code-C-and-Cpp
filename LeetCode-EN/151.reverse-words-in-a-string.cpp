#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
  public:
    string reverseWords(string s) {
        int n = s.size(), index = 0;
        string res = s;
        reverse(res.begin(), res.end());
        for (int i = 0; i < n; ++i) {
            if (res[i] != ' ') {
                if (index != 0) res[index++] = ' ';
                int j = i;
                while (j < n && res[j] != ' ') {
                    res[index++] = res[j++];
                }
                reverse(res.begin() + index - (j - i), res.begin() + index);
                i = j;
            }
        }
        res.resize(index);
        return res;
    }
};
// @lc code=end
