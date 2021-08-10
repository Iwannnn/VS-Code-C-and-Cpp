/*
 * @Author: iwan
 * @Description:数列分段
 * @Date: 2021-08-10 12:38:25
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1181.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, total = 0, res = 1, cur = 0;
    cin >> n >> m;
    while (n--) {
        cin >> cur;
        if (total + cur <= m) {
            total += cur;
        } else {
            ++res;
            total = cur;
            cout << res << endl;
        }
        // cout << total << endl;
    }
    cout << res << endl;
    return 0;
}