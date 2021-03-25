#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
class Solution {
  public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int m = num1.size(), n = num2.size();
        vector<int> vals(m + n);
        string res = "";
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int mul = (num2[j] - '0') * (num1[i] - '0');
                int c = i + j, s = i + j + 1; //本位和进位
                int sum = mul + vals[s];      //这次的本位是上次的进位
                vals[c] += sum / 10;          //修正进位
                vals[s] = sum % 10;           //修正本位
            }
        }
        for (int val : vals) {
            if (!res.empty() || val != 0) res.push_back(val + '0');
        }
        return res;
    }
};
// @lc code=end
