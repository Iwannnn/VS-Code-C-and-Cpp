#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=475 lang=cpp
 *
 * [475] 供暖器
 */

// @lc code=start
class Solution {
  public:
    int findRadius(vector<int> &houses, vector<int> &heaters) {
        int n = heaters.size(), res = 0;
        sort(heaters.begin(), heaters.end());
        for (int house : houses) {
            int left = 0, right = n;
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (heaters[mid] < house)
                    left = mid + 1;
                else
                    right = mid;
            }
            int dist1 = (right == n) ? INT_MAX : heaters[right] - house;
            int dist2 = (right == 0) ? INT_MAX : house - heaters[right - 1];
            res = max(res, min(dist1, dist2));
        }
        return res;
    }
};
// @lc code=end
