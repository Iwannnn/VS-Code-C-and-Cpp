#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
  public:
    char findTheDifference(string s, string t) {
        // for (auto ch : s + t) {
        //     res ^= ch;
        // }
        unordered_map<int, int> smap, tmap;
        for (int i = 0; i < s.size(); ++i) {
            ++smap[s[i] - 'a'];
            ++tmap[t[i] - 'a'];
        }
        ++tmap[t[t.size() - 1] - 'a'];
        for (int i = 0; i < 26; ++i) {
            if (smap[i] < tmap[i]) return 'a' + i;
        }
        return '\0';
        // int smap[26] = {};
        // int tmap[26] = {};
        // int n = s.size();
        // for (int i = 0; i < n; ++i) {
        //     ++smap[s[i] - 'a'];
        //     ++tmap[t[i] - 'a'];
        // }
        // ++tmap[t[n] - 'a'];

        // for (int i = 0; i < 26; ++i) {
        //     if (tmap[i] > smap[i]) return 'a' + i;
        // }
        // return '\0';
    }
};
// @lc code=end
