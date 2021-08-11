/*
 * @Author: iwan
 * @Description:动规项链
 * @Date: 2021-08-11 12:11:18
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1203.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l = 0, r = 0, w = 0, res = 0;
    string s;
    char pre;
    cin >> n >> s;
    s += s;
    for (int i = 0; i < n << 1; i++) {
        if (s[i] == 'w') {
            ++r;
            ++w;
        } else if (s[i] == pre) {
            ++r;
            w = 0;
        } else {
            res = max(res, l + r);
            l = r - w;
            r = w + 1;
            w = 0;
            pre = s[i];
        }
    }
    res = max(res, l + r);
    cout << min(res, n);
    return 0;
}