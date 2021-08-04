/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-08-04 22:11:42
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1145.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, res;
    bool flag = false;
    cin >> k;
    res = k;
    while (!flag) {
        ++res;
        int cursor = 0;
        for (int i = 0; i < k; i++) {
            cursor = (cursor + res - 1) % (2 * k - i);
            if (cursor < k) break;
            if (i == k - 1) flag = true;
        }
    }
    cout << res;
    return 0;
}