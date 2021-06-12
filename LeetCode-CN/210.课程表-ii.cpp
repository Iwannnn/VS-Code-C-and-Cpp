#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=210 lang=cpp
 *
 * [210] 课程表 II
 */

// @lc code=start
class Solution {
  public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites) {
        vector<int> res;
        vector<vector<int>> g(numCourses, vector<int>());
        vector<int> inDegree(numCourses, 0);
        for (auto p : prerequisites) {
            g[p[1]].push_back(p[0]);
            ++inDegree[p[0]];
        }
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) q.push(i);
        }
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            res.push_back(t);
            for (auto p : g[t]) {
                --inDegree[p];
                if (inDegree[p] == 0) q.push(p);
            }
        }
        if (res.size() != numCourses) res.clear();
        return res;
    }
};
// @lc code=end
