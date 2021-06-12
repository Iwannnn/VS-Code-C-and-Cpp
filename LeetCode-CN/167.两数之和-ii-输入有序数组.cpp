#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     int t = target - nums[i];
        //     int left = i + 1, right = n;
        //     while (left < right) {
        //         int mid = (left + right) / 2;
        //         if (nums[mid] == t) return {i + 1, mid + 1};
        //         if (nums[mid] > t) {
        //             right = mid;
        //         } else if (nums[mid] < t) {
        //             left = mid + 1;
        //         }
        //     }
        // }
        // return {};
        int front = 0, back = nums.size() - 1;
        while (front < back) {
            if (nums[front] + nums[back] == target) return {front + 1, back + 1};
            if (nums[front] + nums[back] > target)
                back--;
            else
                front++;
        }
        return {};
    }
};
// @lc code=end
