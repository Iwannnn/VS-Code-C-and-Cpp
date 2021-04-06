#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution {
  public:
    vector<vector<string>> partition(string s) {
        if (s.empty()) return {};
        vector<vector<string>> res;
        vector<string> out;
        dfs(s, 0, out, res);
        return res;
    }
    void dfs(string s, int start, vector<string> &out, vector<vector<string>> &res) {
        if (start == s.size()) res.push_back(out);
        for (int i = start; i < s.size(); i++) {
            if (!isValid(s, start, i)) continue;
            out.push_back(s.substr(start, i - start + 1));
            dfs(s, i + 1, out, res);
            out.pop_back();
        }
    }
    bool isValid(string s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
// @lc code=end
