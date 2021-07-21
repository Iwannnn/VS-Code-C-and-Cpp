/*
 * @Author: iwan
 * @Description: n元买价值最多东西
 * @Date: 2021-07-20 21:09:13
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1060.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    vector<int> price(30, 0), value(30, 0), dp(40000, 0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> price[i] >> value[i];
        value[i] *= price[i];
    }

    for (int i = 1; i <= m; i++) {
        for (int j = n; j >= price[i]; j--) {
            dp[j] = max(dp[j], dp[j - price[i]] + value[i]);
        }
    }

    cout << dp[n];
    return 0;
}