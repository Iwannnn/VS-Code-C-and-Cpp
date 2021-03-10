#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
  public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> res;
        vector<string> dic{
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        dfs(digits, dic, 0, "", res);
        return res;
    }
    void dfs(string &digits, vector<string> &dic, int level, string out, vector<string> &res) {
        if (level == digits.size()) {
            res.push_back(out);
            return;
        }
        string str = dic[digits[level] - '0'];
        for (int i = 0; i < str.size(); i++) {
            dfs(digits, dic, level + 1, out + str[i], res);
        }
    }
};
// @lc code=end
