#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=793 lang=cpp
 *
 * [793] 阶乘函数后 K 个零
 */

// @lc code=start
class Solution {
  public:
    //只有5能匹配到0 判断当前数的cnt
    bool f(long long int mid, int k) {
        long long int cnt = 0;
        while (mid) {
            mid /= 5;
            cnt += mid;
        }
        return cnt >= k;
    }

    int num(int k) {
        long long int l = 0, r = 1e18, mid, res = 0;
        //找出结尾0个数刚好<k的数
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (f(mid, k)) {
                r = mid - 1;
                res = mid;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
    int preimageSizeFZF(int k) {
        //<k+1的个数 - <k的个数
        return num(k + 1) - num(k);
    }
};
// @lc code=end
