#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
  public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        string res;
        int size = 2 * numRows - 2;
        int n = s.size();
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < n; j += size) {
                res += s[j];
                int pos = j + size - 2 * j % size; //j+size判断组 减去
                if (i != 0 && i != numRows - 1 && pos < n) res += s[pos];
            }
        }
        return res;
    }
};
// @lc code=end
