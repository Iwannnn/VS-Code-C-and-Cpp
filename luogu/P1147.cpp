/*
 * @Author: iwan
 * @Description:连续的自然数
 * @Date: 2021-08-06 10:39:18
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1147.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin >> m;
    for (int i = 1; i <= m / 2; i++) {
        int sum = 0, j;
        for (j = i; j < m; j++) {
            sum += j;
            if (sum >= m) break;
        }
        if (sum == m) cout << i << " " << j << endl;
    }
    return 0;
}