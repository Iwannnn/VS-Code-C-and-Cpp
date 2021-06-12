#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=60 lang=cpp
 *
 * [60] 排列序列
 */

// @lc code=start
class Solution {
  public:
    string getPermutation(int n, int k) {
        string res;
        string nums = "123456789";
        vector<int> f(n, 1);
        for (int i = 2; i < n; i++) {
            f[i] = f[i - 1] * i;
        }
        k--;
        for (int i = n; i >= 1; i--) {
            int index = k / f[i - 1];
            k %= f[i - 1];
            res.push_back(nums[index]);
            nums.erase(index, 1);
        }
        return res;
    }
};
// @lc code=end
