/*
 * @Author: iwan
 * @Description:装箱子
 * @Date: 2021-07-18 19:24:12
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1049.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int v_total, n;
    vector<int> v_item(40, 0), dp(20010, 0);
    cin >> v_total >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v_item[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = v_total; j >= v_item[i]; j--) {
            dp[j] = max(dp[j], dp[j - v_item[i]] + v_item[i]);
        }
    }
    cout << v_total - dp[v_total] << endl;
    return 0;
}