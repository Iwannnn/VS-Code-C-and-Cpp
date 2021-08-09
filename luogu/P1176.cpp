/*
 * @Author: iwan
 * @Description:走格子
 * @Date: 2021-08-09 16:04:15
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1176.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x, y;
    vector<vector<int>> lattice(1010, vector<int>(1010, 1)), dp(1010, vector<int>(1010, 0));
    cin >> n >> m;
    while (m--) {
        cin >> x >> y;
        lattice[x][y] = -1;
    }
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (lattice[i][j] == 1) {
                if (i == 1 && j == 1) {
                    continue;
                } else if (i == 1) {
                    dp[i][j] = dp[i][j - 1] % 100003;
                } else if (j == 1) {
                    dp[i][j] = dp[i - 1][j] % 100003;
                } else {
                    dp[i][j] = dp[i][j - 1] % 100003 + dp[i - 1][j] % 100003;
                }
            }
        }
    }
    cout << dp[n][n];
    return 0;
}