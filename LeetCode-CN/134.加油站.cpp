#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=134 lang=cpp
 *
 * [134] 加油站
 */

// @lc code=start
class Solution {
  public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int start = 0, total = 0, sum = 0;
        // int gas_total = accumulate(gas.begin(), gas.end(), 0), cost_total = accumulate(cost.begin(), cost.end(), 0);
        // if (gas_total < cost_total) return -1;
        //由于唯一解
        for (int i = 0; i < gas.size(); i++) {
            total += (gas[i] - cost[i]);
            sum += (gas[i] - cost[i]);
            if (sum < 0) {
                start = i + 1;
                sum = 0;
            }
        }
        return total < 0 ? -1 : start;
    }
};
// @lc code=end
