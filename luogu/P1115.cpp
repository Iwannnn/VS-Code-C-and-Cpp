/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-31 20:02:39
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1115.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, res = INT_MIN;
    vector<int> a(200010), dp(200010, 0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = max(dp[i - 1] + a[i], a[i]);
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}