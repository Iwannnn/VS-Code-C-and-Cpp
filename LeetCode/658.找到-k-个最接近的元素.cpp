#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=658 lang=cpp
 *
 * [658] 找到 K 个最接近的元素
 */

// @lc code=start
class Solution {
  public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x) {
        // vector<int> res = arr;
        // int n = res.size();
        // for (int i = n; i > k; i--) {
        //     if (res.back() - x >= x - res.front())
        //         res.pop_back();
        //     else
        //         res.erase(res.begin());
        // }
        // return res;
        int left = 0, right = arr.size() - k;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
// @lc code=end
