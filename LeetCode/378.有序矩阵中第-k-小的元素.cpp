#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=378 lang=cpp
 *
 * [378] 有序矩阵中第 K 小的元素
 */

// @lc code=start
class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // priority_queue<int> q;
        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[0].size(); j++) {
        //         q.emplace(matrix[i][j]);
        //         if (q.size() > k) q.pop();
        //     }
        // }
        // return q.top();
        int left = matrix[0][0], right = matrix.back().back();
        while (left < right) {
            int mid = left + (right - left) / 2, cnt = 0;
            for (int i = 0; i < matrix.size(); ++i) {
                cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if (cnt < k)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};
// @lc code=end
