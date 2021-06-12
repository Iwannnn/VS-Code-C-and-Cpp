#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1103 lang=cpp
 *
 * [1103] 分糖果 II
 */

// @lc code=start
class Solution {
  public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int cnt = 0;
        while (candies) {
            res[cnt % num_people] += min(candies, cnt + 1);
            candies -= min(candies, cnt + 1);
            ++cnt;
        }
        return res;
    }
};
// @lc code=end
