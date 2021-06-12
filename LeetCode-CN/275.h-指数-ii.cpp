#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=275 lang=cpp
 *
 * [275] H 指数 II
 */

// @lc code=start
class Solution {
  public:
    int hIndex(vector<int> &citations) {
        int left = 0, right = citations.size() - 1;
        int res = 0, n = citations.size();
        while (left <= right) {
            int mid = (left + right) / 2;
            if (citations[mid] == n - mid) return n - mid;
            if (citations[mid] > n - mid)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return n - left;
    }
};
// @lc code=end
