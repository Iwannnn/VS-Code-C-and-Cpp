#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N 皇后
 */

// @lc code=start
class Solution {
  public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        // vector<string> queen(n, string(n, '.'));
        vector<int> queenCol(n, -1); //! queenCol[i]存这i行j列是否是q
        // helper(0, queen, res);
        helper(0, queenCol, res);
        return res;
    }
    void helper(int curRow, vector<string> &queen, vector<vector<string>> &res) {
        int n = queen.size();
        if (curRow == n) {
            res.push_back(queen);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isValid(queen, curRow, i)) {
                queen[curRow][i] = 'Q';
                helper(curRow + 1, queen, res);
                queen[curRow][i] = '.';
            }
        }
    }
    void helper(int curRow, vector<int> &queenCol, vector<vector<string>> &res) {
        int n = queenCol.size();
        if (curRow == n) {
            vector<string> out(n, string(n, '.'));
            for (int i = 0; i < n; i++) {
                out[i][queenCol[i]] = 'Q';
            }
            res.push_back(out);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isValid(queenCol, curRow, i)) {
                queenCol[curRow] = i;
                helper(curRow + 1, queenCol, res);
                queenCol[curRow] = -1;
            }
        }
    }
    bool isValid(vector<string> &queen, int row, int col) {
        for (int i = 0; i < row; i++) { //!检查当前列
            if (queen[i][col] == 'Q') return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) { //!检查左上斜线
            if (queen[i][j] == 'Q') return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < queen.size(); i--, j++) { //!检查右上斜线
            if (queen[i][j] == 'Q') return false;
        }
        return true;
    }
    bool isValid(vector<int> &queenCol, int row, int col) {
        for (int i = 0; i < row; i++) {
            if (col == queenCol[i] || (abs(queenCol[i] - col) == abs(i - row))) return false;
        }
        return true;
    }
};
// @lc code=end
