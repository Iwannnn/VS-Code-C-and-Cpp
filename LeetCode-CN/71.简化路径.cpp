#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=71 lang=cpp
 *
 * [71] 简化路径
 */

// @lc code=start
class Solution {
  public:
    string simplifyPath(string path) {
        string res, t;
        stringstream paths(path);
        vector<string> v;
        while (getline(paths, t, '/')) {
            if (t == "" || t == ".") continue;
            if (t == ".." && !v.empty())
                v.pop_back();
            else if (t != "..")
                v.push_back(t);
        }
        for (string s : v)
            res += "/" + s;
        return res.empty() ? "/" : res;
    }
};
// @lc code=end
