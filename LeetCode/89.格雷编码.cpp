#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=89 lang=cpp
 *
 * [89] 格雷编码
 */

// @lc code=start
class Solution {
  public:
    vector<int> grayCode(int n) {
        vector<int> res;
        int number = 1 << n;
        for (int i = 0; i < number; i++) {
            res.push_back(i ^ (i >> 1));
        }
        return res;
    }
};
// @lc code=end
