#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int res = 0, buy = INT_MAX;
        for (int price : prices) {
            buy = min(price, buy);
            res = max(res, price - buy);
        }
        return res;
    }
};
// @lc code=end
