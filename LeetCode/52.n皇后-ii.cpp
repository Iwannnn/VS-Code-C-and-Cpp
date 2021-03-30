#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N皇后 II
 */

// @lc code=start
class Solution {
  public:
    int totalNQueens(int n) {
        int res = 0;
        vector<bool> col(n), dia(2 * n), anti_dia(2 * n);
        helper(n, 0, res, col, dia, anti_dia);
        return res;
    }
    void helper(int n, int curRow, int &res, vector<bool> col, vector<bool> dia, vector<bool> anti_dia) {
        if (n == curRow) {
            res++;
        }
        for (int i = 0; i < n; i++) {
            int index1 = i - curRow + n, index2 = curRow + i;
            if (col[i] || dia[index1] || anti_dia[index2]) continue;
            col[i] = dia[index1] = anti_dia[index2] = true;
            helper(n, curRow + 1, res, col, dia, anti_dia);
            col[i] = dia[index1] = anti_dia[index2] = false;
        }
    }
};
// @lc code=end
