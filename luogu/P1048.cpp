/*
 * @Author: iwan
 * @Description:动态规划 背包
 * @Date: 2021-07-18 18:50:47
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1048.cpp
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, m;
    vector<int> v(120, 0), w(120, 0);
    // vector<vector<int>> dp(120, vector<int>(1020, 0));
    vector<int> dp(1020, 0);
    cin >> t >> m;
    for (int i = 1; i <= m; i++) {
        cin >> w[i] >> v[i];
    }

    //    for (int i = 1; i <= m; i++) {
    //        for (int j = t; j >= 0; j--) {
    //            if (j >= w[i]) {
    //                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
    //            } else {
    //                dp[i][j] = dp[i - 1][j];
    //            }
    //        }
    //    }
    for (int i = 1; i <= m; i++) {
        for (int j = t; j >= 0; j--) {
            if (j >= w[i]) {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[t];
    return 0;
}