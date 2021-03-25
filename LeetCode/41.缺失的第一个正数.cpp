#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
  public:
    int firstMissingPositive(vector<int> &nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int res = 1, n = nums.size();
        while (res <= n) {
            if (!st.count(res)) return res;
            res++;
        }
        return res;
    }
};
// @lc code=end
