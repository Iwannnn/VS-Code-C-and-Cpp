/*
 * @Author: iwan
 * @Description:申请红牌
 * @Date: 2021-08-01 15:48:04
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1130.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> time(2010, vector<int>(2010, 0)), dp(2010, vector<int>(2010, 0));
    int n, m, res = INT_MAX;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> time[j][i]; //输入j项目i小组时间
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = min(dp[i - 1][j], j == 1 ? dp[i - 1][m] : dp[i - 1][j - 1]) + time[i][j]; //计算至第i项目j小组最小耗时
    for (int i = 1; i <= m; i++)
        res = min(res, dp[n][i]);
    cout << res;
    return 0;
}