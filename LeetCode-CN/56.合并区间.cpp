#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
  public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        if (intervals.empty()) return {};
        vector<vector<int>> res;
        vector<int> out;
        sort(intervals.begin(), intervals.end());
        int n = (int)intervals.size(), begin = intervals[0][0], end = intervals[0][1];
        for (int i = 1; i < n; i++) {
            if (end >= intervals[i][0]) {
                if (intervals[i][1] > end) end = intervals[i][1];
            } else {
                out.push_back(begin);
                out.push_back(end);
                res.push_back(out);
                out.pop_back();
                out.pop_back();
                begin = intervals[i][0];
                end = intervals[i][1];
            }
        }
        if (begin != -1 && end != -1) {
            out.push_back(begin);
            out.push_back(end);
            res.push_back(out);
        }
        return res;
    }
};
// @lc code=end
