/*
 * @Author: iwan
 * @Description:多项式输出
 * @Date: 2021-07-23 16:28:41
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1067.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    for (int i = n; i >= 0; i--) {
        cin >> x;
        if (x) {
            if (i != n && x > 0) cout << "+";
            if (abs(x) > 1 || i == 0) cout << x;
            if (x == -1 && i) cout << "-";
            if (i > 1) cout << "x^" << i;
            if (i == 1) cout << "x";
        }
    }
    return 0;
}