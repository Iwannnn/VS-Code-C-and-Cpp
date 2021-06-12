#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
  public:
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int mn = nums1.size() + nums2.size();
        if (mn % 2 == 0) {
            return (findmid(nums1, nums2, mn / 2) + findmid(nums1, nums2, mn / 2 + 1)) / 2.0;
        } else {
            return findmid(nums1, nums2, (mn + 1) / 2);
        }
    }
    double findmid(vector<int> &nums1, vector<int> &nums2, int k) {
        int m = nums1.size();
        int n = nums2.size();
        int index1 = 0, index2 = 0;
        while (true) {
            if (m == index1) {
                return nums2[index2 + k - 1];
            }
            if (n == index2) {
                return nums1[index1 + k - 1];
            }
            if (k == 1) {
                return min(nums1[index1], nums2[index2]);
            }

            int newindex1 = min(index1 + k / 2 - 1, m - 1);
            int newindex2 = min(index2 + k / 2 - 1, n - 1);
            int p1 = nums1[newindex1];
            int p2 = nums2[newindex2];
            if (p1 <= p2) {
                k -= newindex1 - index1 + 1;
                index1 = newindex1 + 1;
            } else {
                k -= newindex2 - index2 + 1;
                index2 = newindex2 + 1;
            }
        }
    }
};
// @lc code=end
