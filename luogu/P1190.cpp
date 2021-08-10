/*
 * @Author: iwan
 * @Description:接水
 * @Date: 2021-08-10 17:56:37
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1190.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, next, over = 0, res = 0;
    vector<int> w(10010);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    next = m + 1;
    while (over < n) {
        for (int i = 1; i <= m; i++) {
            --w[i];
            if (w[i] == 0) {
                w[i] = w[next++];
                ++over;
            }
        }
        ++res;
    }
    cout << res;
    return 0;
}