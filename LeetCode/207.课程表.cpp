#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */

// @lc code=start
class Solution {
  public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
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
            for (auto p : g[t]) {
                --inDegree[p];
                if (inDegree[p] == 0) q.push(p);
            }
        }
        for (auto in : inDegree) {
            if (in) return false;
        }
        return true;
    }
};
// @lc code=end
