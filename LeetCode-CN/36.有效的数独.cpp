#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution {
  public:
    bool isValidSudoku(vector<vector<char>> &board) {
        unordered_set<string> hash;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                string t = "!" + to_string(board[i][j]) + "!";
                string col = t + to_string(j), row = to_string(i) + t,
                       cell = to_string(i / 3) + t + to_string(j / 3);
                if (hash.count(col) || hash.count(row) || hash.count(cell))
                    return false;
                hash.insert(col);
                hash.insert(row);
                hash.insert(cell);
            }
        }
        return true;
    }
};
// @lc code=end
