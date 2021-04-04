#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {
  public:
    bool exist(vector<vector<char>> &board, string word) {
        if (board.empty() || board[0].empty()) return false;
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (search(board, word, i, j, 0, visited)) return true;
            }
        }
        return false;
    }
    bool search(vector<vector<char>> &board, string word, int i, int j, int index, vector<vector<bool>> &visited) {
        if (index == word.size()) return true;
        int m = board.size(), n = board[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || visited[i][j] || board[i][j] != word[index]) return false;
        visited[i][j] = true;
        bool res = search(board, word, i - 1, j, index + 1, visited) || search(board, word, i + 1, j, index + 1, visited) ||
                   search(board, word, i, j - 1, index + 1, visited) || search(board, word, i, j + 1, index + 1, visited);
        visited[i][j] = false;
        return res;
    }
};
// @lc code=end
