#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
  public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4) {
        int res = 0;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                hash[nums1[i] + nums2[j]]++;
            }
        }
        for (int i = 0; i < nums3.size(); i++) {
            for (int j = 0; j < nums4.size(); j++) {
                int target = -1 * (nums3[i] + nums4[j]);
                res += hash[target];
            }
        }
        return res;
    }
};
// @lc code=end
