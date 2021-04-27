#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=907 lang=cpp
 *
 * [907] 子数组的最小值之和
 */

// @lc code=start
class Solution {
  public:
    int sumSubarrayMins(vector<int> &arr) {
        long long int res = 0, n = arr.size(), mod = 1e9 + 7, j, k;
        stack<int> s;
        for (int i = 0; i <= n; i++) {
            while (!s.empty() && arr[s.top()] > (i == n ? 0 : arr[i])) { //比当前小元素小进行操作
                j = s.top(), s.pop();                                    //获取当前小元素
                k = s.empty() ? -1 : s.top(); //获取上一个小元素的位置 为空的就只有自己一个是最小的
                res = (res + arr[j] * (i - j) * (j - k)) % mod; // i为下一个小的元素 j为当前小元素 k为上一个小元素
            }
            s.push(i);
        }
        return res;
    }
};
// @lc code=end
