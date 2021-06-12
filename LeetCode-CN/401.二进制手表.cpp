#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
  public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                if (bitset<10>((h << 6) + m).count() == turnedOn) {
                    res.push_back(to_string(h) + (m >= 10 ? ":" : ":0") + to_string(m));
                }
            }
        }
        return res;
    }
};
// @lc code=end
