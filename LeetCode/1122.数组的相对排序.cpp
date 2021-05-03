#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution {
  public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2) {
        int nums[1001] = {0};
        vector<int> res;
        for (auto num : arr1) {
            nums[num]++;
        }
        for (int i = 0; i < arr2.size(); i++) {
            while (nums[arr2[i]]) {
                res.push_back(arr2[i]);
                nums[arr2[i]]--;
            }
        }
        for (int i = 0; i < 1001; i++) {
            while (nums[i] != 0) {
                res.push_back(i);
                nums[i]--;
            }
        }
        return res;
    }
};
// @lc code=end
