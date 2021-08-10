/*
 * @Author: iwan
 * @Description:走台阶
 * @Date: 2021-08-10 18:19:45
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1192.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, fab[100010] = {0};
    fab[0] = 1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= min(i, k); j++)
            fab[i] = (fab[i] + fab[i - j]) % 100003;
    cout << fab[n];
    return 0;
}