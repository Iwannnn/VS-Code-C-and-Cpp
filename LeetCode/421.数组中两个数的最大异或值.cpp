#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=421 lang=cpp
 *
 * [421] 数组中两个数的最大异或值
 */

// @lc code=start
class Solution {
  public:
    int findMaximumXOR(vector<int> &nums) {
        int res = 0, mask = 0;
        for (int i = 31; i >= 0; --i) {
            //从最高位开始找
            mask |= (1 << i);
            unordered_set<int> s;
            for (int num : nums) {
                //去第i位
                s.insert(num & mask);
            }
            int temp_res = res | (1 << i);
            //可能被更新res的值 当前为的结果变成1这样才大
            for (int ss : s) {
                if (s.count(ss ^ temp_res)) {
                    res = temp_res;
                    break;
                }
            }
            // a^b =c  则 c^a=b
        }
        return res;
    }
};
// @lc code=end