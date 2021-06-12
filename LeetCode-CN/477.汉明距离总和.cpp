#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=477 lang=cpp
 *
 * [477] 汉明距离总和
 */

// @lc code=start
class Solution {
  public:
    int totalHammingDistance(vector<int> &nums) {
        int res = 0, n = nums.size();
        for (int i = 0; i <= 31; ++i) {
            int cnt = 0;
            for (int num : nums) {
                if (num & (1 << i)) ++cnt;
            }
            res += (n - cnt) * cnt;
        }
        return res;
    }
};
// @lc code=end
