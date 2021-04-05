#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=93 lang=cpp
 *
 * [93] 复原 IP 地址
 */

// @lc code=start
class Solution {
  public:
    vector<string> restoreIpAddresses(string s) {
        if (s.size() > 12) return {};
        vector<string> res;
        restore(s, 4, "", res);
        return res;
    }
    void restore(string s, int ipNum, string out, vector<string> &res) {
        if (ipNum == 0)
            if (s.empty()) res.push_back(out);
        for (int i = 1; i <= 3; i++) {
            if (s.size() >= i && isValid(s.substr(0, i))) {
                if (ipNum == 1)
                    restore(s.substr(i), ipNum - 1, out + s.substr(0, i), res);
                else
                    restore(s.substr(i), ipNum - 1, out + s.substr(0, i) + ".", res);
            }
        }
    }
    bool isValid(string s) {
        if (s.empty() || s.size() > 3 || (s.size() > 1 && s[0] == '0')) return false;
        int num = atoi(s.c_str());
        return num <= 255 && num >= 0;
    }
};
// @lc code=end
