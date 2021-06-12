#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
  public:
    bool isSubsequence(string s, string t) {
        // int i, j;
        // for (i = 0, j = 0; i < s.size() && j < t.size(); j++) {
        //     if (s[i] == t[j]) i++;
        // }
        // if (i == s.size())
        //     return true;
        // else
        //     return false;
        int pre = -1, n = t.size();
        unordered_map<char, vector<int>> tt;
        for (int i = 0; i < n; i++)
            tt[t[i]].push_back(i);
        for (char ch : s) {
            auto it = upper_bound(tt[ch].begin(), tt[ch].end(), pre);
            if (it == tt[ch].end()) return false;
            pre = *it;
        }
        return true;
    }
};
// @lc code=end
