#include <bits/stdc++.h>
using namespace std;
/*
 * @Author: iwan
 * @Description: 递归找一个数的一半的数有几个
 * @Date: 2021-07-14 18:04:40
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1028.cpp
 */

void help(int n, int &res) {
    int mid = n / 2;
    res += mid;
    for (int i = 1; i <= mid; ++i)
        help(i, res);
}

int main() {
    int n, dp[1001];
    cin >> n;
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            dp[i] = dp[i - 1] + dp[i / 2];
        } else {
            dp[i] = dp[i - 1];
        }
    }
    cout << dp[n];
    return 0;
}