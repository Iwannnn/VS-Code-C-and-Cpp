/*
 * @Author: iwan
 * @Description:背包问题
 * @Date: 2021-08-09 13:40:39
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1164.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int m, n, a[110], dp[110][10010] = {0};
int main() {
    cin >> n >> m; // n种 m元
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = a[i] == j ? dp[i - 1][j] + 1 : a[i] > j ? dp[i - 1][j] : dp[i - 1][j - a[i]] + dp[i - 1][j];
        }
    }
    cout << dp[n][m];
    return 0;
}