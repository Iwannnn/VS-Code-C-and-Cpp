#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=910 lang=cpp
 *
 * [910] 最小差值 II
 */

// @lc code=start
class Solution {
  public:
    int smallestRangeII(vector<int> &A, int K) {
        int n = A.size();
        sort(A.begin(), A.end());
        int res = A[n - 1] - A[0];
        for (int i = 0; i < n - 1; i++) {
            int high = max(A[i] + K, A[n - 1] - K); //小的变大和最大的变小比谁打
            int low = min(A[i + 1] - K, A[0] + K);  //大的变小和最小的变大比谁小
            res = min(res, high - low);
        }
        return res;
    }
};
// @lc code=end
