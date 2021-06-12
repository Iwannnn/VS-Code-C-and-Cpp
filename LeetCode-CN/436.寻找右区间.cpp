#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=436 lang=cpp
 *
 * [436] 寻找右区间
 */

// @lc code=start
class Solution {
  public:
    vector<int> findRightInterval(vector<vector<int>> &intervals) {
        vector<int> res;
        map<int, int> m;
        for (int i = 0; i < intervals.size(); i++) {
            m[intervals[i][0]] = i;
        }
        for (auto interval : intervals) {
            auto it = m.lower_bound(interval[1]);
            if (it == m.end())
                res.push_back(-1);
            else
                res.push_back(it->second);
        }
        return res;
    }
};
// @lc code=end
