#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=316 lang=cpp
 *
 * [316] 去除重复字母
 */

// @lc code=start
class Solution {
  public:
    string removeDuplicateLetters(string s) {
        int alpha[256] = {0}, visited[256] = {0};
        string res = "0";
        for (auto ch : s)
            ++alpha[ch];
        for (auto ch : s) {
            --alpha[ch];
            if (visited[ch]) continue;
            while (ch < res.back() && alpha[res.back()]) {
                visited[res.back()] = 0;
                res.pop_back();
            }
            res += ch;
            visited[ch] = 1;
        }
        return res.substr(1);
    }
};
// @lc code=end
