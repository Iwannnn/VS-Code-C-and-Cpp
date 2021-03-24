#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=37 lang=cpp
 *
 * [37] 解数独
 */

// @lc code=start
class Solution {
  public:
    void solveSudoku(vector<vector<char>> &board) {
        func(board, 0, 0);
    }

    bool func(vector<vector<char>> &board, int i, int j) {
        if (i == 9) return true;
        if (j >= 9) return func(board, i + 1, 0);
        if (board[i][j] != '.') return func(board, i, j + 1);
        for (char ch = '1'; ch <= '9'; ch++) {
            if (!isValid(board, i, j, ch)) continue;
            board[i][j] = ch;
            if (func(board, i, j + 1)) return true;
            board[i][j] = '.';
        }
        return false;
    }
    bool isValid(vector<vector<char>> &board, int i, int j, char val) {
        for (int x = 0; x < 9; x++) {
            if (board[x][j] == val) return false;
        }
        for (int y = 0; y < 9; y++) {
            if (board[i][y] == val) return false;
        }
        int row = i - i % 3, col = j - j % 3;
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                if (board[row + x][col + y] == val) return false;
            }
        }
        return true;
    }
};
// @lc code=end
