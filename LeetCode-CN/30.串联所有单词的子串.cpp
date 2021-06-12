#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=30 lang=cpp
 *
 * [30] 串联所有单词的子串
 */

// @lc code=start
class Solution {
public:
  vector<int> findSubstring(string s, vector<string> &words) {
    if (s.empty() || words.empty())
      return {};
    vector<int> res;
    unordered_map<string, int> words_cnt;
    int n = words.size(), len = words[0].size();
    for (auto &word : words)
      words_cnt[word]++;
    for (int i = 0; i <= (int)s.size() - n * len; i++) {
      unordered_map<string, int> string_cnt;
      int j = 0;
      for (j = 0; j < n; j++) {
        string str_word = s.substr(i + len * j, len);
        if (!words_cnt[str_word])
          break;
        string_cnt[str_word]++;
        if (string_cnt[str_word] > words_cnt[str_word])
          break;
      }
      if (j == n)
        res.push_back(i);
    }
    return res;
  }
};
// @lc code=end
