#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
class Solution {
  public:
    string intToRoman(int num) {
        string res = "";
        vector<int> vals{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> str = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < vals.size(); i++) {
            while (num >= vals[i]) {
                num -= vals[i];
                res += str[i];
            }
        }
        return res;
    }
};
// @lc code=end
