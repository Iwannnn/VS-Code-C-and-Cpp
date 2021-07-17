/*
 * @Author: iwan
 * @Description: 栈 弹出情况
 * @Date: 2021-07-17 20:46:28
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1044.cpp
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> dp(20, vector<int>(20));
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (i == j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    cout << dp[n][n];
    return 0;
}
