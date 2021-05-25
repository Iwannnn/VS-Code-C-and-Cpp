#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=130 lang=cpp
 *
 * [130] 被围绕的区域
 */

// @lc code=start
class Solution {
  public:
    void solve(vector<vector<char>> &board) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if ((i == 0 | i == board.size() - 1 || j == 0 | j == board[i].size() - 1) && board[i][j] == 'O')
                    dfs(i, j, board);
            }
        }
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == '$') board[i][j] = 'O';
            }
        }
    }

    void dfs(int i, int j, vector<vector<char>> &board) {
        board[i][j] = '$';
        if (i > 0 && board[i - 1][j] == 'O') dfs(i - 1, j, board);
        if (i < board.size() - 1 && board[i + 1][j] == 'O') dfs(i + 1, j, board);
        if (j > 0 && board[i][j - 1] == 'O') dfs(i, j - 1, board);
        if (j < board[i].size() - 1 && board[i][j + 1] == 'O') dfs(i, j + 1, board);
    }
};
// @lc code=end
