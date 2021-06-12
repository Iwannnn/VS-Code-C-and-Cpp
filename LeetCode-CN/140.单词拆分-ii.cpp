#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=140 lang=cpp
 *
 * [140] 单词拆分 II
 */

// @lc code=start
class Solution {
  public:
    vector<string> wordBreak(string s, vector<string> &wordDict) {
        vector<string> res;
        string out;
        unordered_set<string> words(wordDict.begin(), wordDict.end());
        dfs(s, words, 0, out, res);
        return res;
    }
    void dfs(string s, unordered_set<string> words, int start, string &out, vector<string> &res) {
        if (start == s.size()) res.push_back(out);
        for (int i = start; i < s.size(); i++) {
            if (!words.count(s.substr(start, i - start + 1))) {
                continue;
            }
            string temp;
            if (start == 0)
                temp = s.substr(start, i - start + 1);
            else
                temp = out + " " + s.substr(start, i - start + 1);
            dfs(s, words, i + 1, temp, res);
        }
    }
};
// @lc code=end
