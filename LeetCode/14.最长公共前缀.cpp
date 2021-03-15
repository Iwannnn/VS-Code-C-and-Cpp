#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) return "";
        string res = "";
        for (int index = 0; index < strs[0].size(); ++index) {
            char c = strs[0][index];
            for (int i = 1; i < strs.size(); ++i) {
                if (index >= strs[i].size() || strs[i][index] != c) {
                    return res;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};
// @lc code=end
