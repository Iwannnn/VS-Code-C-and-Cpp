#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
  public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        // unordered_set<int> st(nums1.begin(), nums1.end()), res;
        // for (int num : nums2) {
        //     if (st.count(num)) res.insert(num);
        // }
        // return vector<int>(res.begin(), res.end());

        // set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end()), res;
        // set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.begin()));
        // return vector<int>(res.begin(), res.end());

        unordered_set<int> res;
        sort(nums2.begin(), nums2.end());
        for (auto num : nums1) {
            if (binSearch(nums2, num)) res.insert(num);
        }
        return vector<int>(res.begin(), res.end());
    }

    bool binSearch(vector<int> &nums, int target) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return true;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return false;
    }
};
// @lc code=end
