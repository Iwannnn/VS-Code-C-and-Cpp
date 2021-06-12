#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=752 lang=cpp
 *
 * [752] 打开转盘锁
 */

// @lc code=start
class Solution {
  public:
    int openLock(vector<string> &deadends, string target) {
        int res = 0, n = deadends.size();

        for (int i = 0; i < 4; ++i) {
            unordered_set<int> dead;
            for (int j = 0; j < n; ++j) {
                dead.insert(int(deadends[i][j] - '0'));
            }
            int step = canIReach(dead, target[i]);
            if (step == -1)
                return -1;
            else
                res += step;
        }
        return res;
    }
    int canIReach(unordered_set<int> dead, char target) {
        bool up_flag = true, down_flag = true;
        int up_val = 0, down_val = 0;
        if (target == '0' && dead.count(0) == 0) return 0;
        for (int i = 1; i <= target - '0'; ++i) {
            if (!dead.count(i)) {
                ++up_val;
            } else {
                up_flag = false;
                break;
            }
        }
        for (int i = 9; i >= target - '0'; --i) {
            if (!dead.count(i)) {
                ++down_val;
            } else {
                down_flag = false;
                break;
            }
        }
        if (up_flag && down_flag) {
            return min(up_val, down_val);
        } else if (up_flag) {
            return up_val;
        } else if (down_flag) {
            return down_val;
        } else
            return false;
    }
};
// @lc code=end