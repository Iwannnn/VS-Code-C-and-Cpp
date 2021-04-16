#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
  public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        // vector<int> res;
        // if (nums1.size() < nums2.size()) {
        //     sort(nums2.begin(), nums2.end());
        //     for (auto num : nums1) {
        //         if (binSearch(nums2, num)) res.push_back(num);
        //     }
        // } else {
        //     sort(nums1.begin(), nums1.end());
        //     for (auto num : nums2) {
        //         if (binSearch(nums1, num)) res.push_back(num);
        //     }
        // }
        // return res;
        unordered_map<int, int> m;
        vector<int> res;
        for (auto a : nums1)
            ++m[a];
        for (auto a : nums2) {
            if (m[a]-- > 0) res.push_back(a);
        }
        return res;
    }
    bool binSearch(vector<int> &nums, int target) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return false;
    }
};
// @lc code=end
