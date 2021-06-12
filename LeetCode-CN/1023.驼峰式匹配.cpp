#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1023 lang=cpp
 *
 * [1023] 驼峰式匹配
 */

// @lc code=start
class Solution {
  public:
    vector<bool> camelMatch(vector<string> &queries, string pattern) {
        vector<bool> res;
        for (string query : queries) {
            res.push_back(isValue(query, pattern));
        }
        return res;
    }
    bool isValue(string query, string pattern) {
        int ql = 0, qr = query.size() - 1;
        int pl = 0, pr = pattern.size() - 1;
        int num = 0;
        while (ql <= qr) {
            if (query[ql] == pattern[pl]) {
                pl++;
                if (pl <= pr + 1) num++;
            } else if (isupper(query[ql])) {
                return false;
            }
            ql++;
            if (query[qr] == pattern[pr]) {
                pr--;
                if (pl <= pr + 1) num++;
            } else if (isupper(query[qr])) {
                return false;
            }
            qr--;
        }
        return num == pattern.size();
    }
};
// @lc code=end
