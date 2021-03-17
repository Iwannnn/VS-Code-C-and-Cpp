#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
  public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(n, n, "", res);
        return res;
    }
    void generate(int left, int right, string brackets, vector<string> &res) {
        if (left > right) return;
        if (right == 0 && left == 0)
            res.push_back(brackets);
        else {
            if (left > 0) generate(left - 1, right, brackets + "(", res);
            if (right > 0) generate(left, right - 1, brackets + ")", res);
        }
    }
};
// @lc code=end
