#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=187 lang=cpp
 *
 * [187] 重复的DNA序列
 */

// @lc code=start
class Solution {
  public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> res;
        unordered_set<int> st;
        unordered_map<char, int> map{{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};
        int cur = 0;
        for (int i = 0; i < 9; i++) {
            cur = (cur << 2) | map[s[i]];
        }
        for (int i = 9; i < s.size(); i++) {
            cur = ((cur & 0x3ffff) << 2) | (map[s[i]]);
            if (st.count(cur))
                res.insert(s.substr(i - 9, 10));
            else
                st.insert(cur);
        }
        return vector<string>(res.begin(), res.end());
    }
};
// @lc code=end
