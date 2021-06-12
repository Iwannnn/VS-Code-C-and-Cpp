#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=318 lang=cpp
 *
 * [318] 最大单词长度乘积
 */

// @lc code=start
class Solution {
  public:
    int maxProduct(vector<string> &words) {
        int res = 0;
        vector<int> mask(words.size(), 0);
        for (int i = 0; i < words.size(); i++) {
            for (auto ch : words[i]) {
                mask[i] |= 1 << (ch - 'a');
            }
            for (int j = 0; j < i; j++) {
                if (!(mask[i] & mask[j])) {
                    res = max(res, int(words[i].size() * words[j].size()));
                }
            }
        }
        return res;
    }
};
// @lc code=end
