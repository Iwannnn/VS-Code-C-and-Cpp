#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=809 lang=cpp
 *
 * [809] 情感丰富的文字
 */

// @lc code=start
class Solution {
  public:
    int expressiveWords(string S, vector<string> &words) {
        int res = 0;
        for (auto word : words) {
            bool flag = true;
            int i = 0, j = 0;
            for (; i < word.size(); i++) {
                int cnti = 1;
                char cur = word[i];
                while (i + 1 < word.size() && word[i + 1] == cur) {
                    cnti++;
                    i++;
                }
                int cntj = 0;
                while (j < S.size() && S[j] == cur) {
                    cntj++;
                    j++;
                }
                if (cntj < cnti || (cntj > cnti && cntj < 3)) {
                    flag = false;
                    break;
                }
            }
            if (j < S.size()) flag = false;
            if (flag) res++;
        }
        return res;
    }
};
// @lc code=end
