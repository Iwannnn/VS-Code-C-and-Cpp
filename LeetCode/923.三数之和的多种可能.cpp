#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=923 lang=cpp
 *
 * [923] 三数之和的多种可能
 */

// @lc code=start
class Solution {
  public:
    int threeSumMulti(vector<int> &arr, int target) {
        long res = 0;
        unordered_map<int, long> counter;
        for (auto a : arr) {
            counter[a]++;
        }
        for (auto i1 : counter) {
            for (auto i2 : counter) {
                int i = i1.first, j = i2.first, k = target - i - j;
                if (!counter.count(k)) {
                    continue;
                }
                // ijk表示内容，coutnerijk表示他包含的个数，再利用排列组合计算下
                if (i == j && j == k) {
                    res += counter[i] * (counter[i] - 1) * (counter[i] - 2) / 6;
                } else if (i == j && j != k) {
                    res += counter[i] * (counter[i] - 1) * (counter[k]) / 2;
                } else if (i < j && j < k) {
                    res += counter[i] * counter[j] * counter[k];
                }
            }
        }

        return res % int(1e9 + 7);
    }
};
// @lc code=end
