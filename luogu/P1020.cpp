/*
 * @Author: iwan
 * @Description:导弹拦截
 * @Date: 2021-07-21 18:20:04
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1020.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0, res1 = 0, res2 = 0;
    int high[100010] = {0}, dp[100010] = {1};
    while (cin >> high[++n])
        ;
    n--;
    for (int i = n; i >= 1; i--) { //!如果拦截了这个导弹还能拦截多少个,最长不上升序列
        for (int j = i + 1; j <= n; j++) {
            if (high[j] <= high[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res1 = max(dp[i], res1);
    }
    memset(dp, 1, sizeof(dp));
    for (int i = 1; i <= n; i++) { //!上升序列长度
        for (int j = 1; j < i; j++) {
            if (high[j] < high[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res2 = max(res2, dp[i]);
    }
    cout << res1 << " " << res2 << endl;
    return 0;
}
