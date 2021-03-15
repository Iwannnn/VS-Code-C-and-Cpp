#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
  public:
    int maxArea(vector<int> &height) {
        int res = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            res = max(res, min(height[i], height[j]) * (j - i));
            height[i] > height[j] ? j-- : i++;
        }
        return res;
    }
};
// @lc code=end
