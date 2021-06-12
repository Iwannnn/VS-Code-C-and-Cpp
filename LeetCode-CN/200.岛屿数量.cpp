#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
  public:
    int numIslands(vector<vector<char>> &grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<int> directRow{1, 0, -1, 0}, directCol{0, 1, 0, -1};
        int res = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '0' || visited[i][j]) continue;
                // dfs(grid, visited, i, j);
                queue<int> q{{i * n + j}};
                while (!q.empty()) {
                    int temp = q.front();
                    q.pop();
                    for (int k = 0; k < 4; ++k) {
                        int x = temp / n + directRow[k], y = temp % n + directCol[k];
                        if (x < 0 || x > grid.size() - 1 || y < 0 || y > grid[0].size() - 1 || grid[x][y] == '0' ||
                            visited[x][y])
                            continue;
                        visited[x][y] = true;
                        q.push(x * n + y);
                    }
                }
                ++res;
            }
        }
        return res;
    }
    // void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int i, int j) {
    //     if (i < 0 || i > grid.size() - 1 || j < 0 || j > grid[0].size() - 1 || grid[i][j] == '0' || visited[i][j]) return;
    //     visited[i][j] = true;
    //     dfs(grid, visited, i - 1, j);
    //     dfs(grid, visited, i + 1, j);
    //     dfs(grid, visited, i, j - 1);
    //     dfs(grid, visited, i, j + 1);
    // }
};
// @lc code=end
