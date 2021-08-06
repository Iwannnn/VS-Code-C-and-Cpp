/*
 * @Author: iwan
 * @Description:火柴棍等式
 * @Date: 2021-08-06 10:46:16
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1149.cpp
 */
#include <bits/stdc++.h>
using namespace std;
vector<int> num = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int matches(int n) {
    int res = 0;
    if (n == 0)
        return num[n];
    else
        while (n != 0) {
            res += num[n % 10];
            n /= 10;
        }
    return res;
}
int main() {
    int n, res = 0;
    cin >> n;
    n -= 4;
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            if (matches(i) + matches(j) + matches(i + j) == n) {
                ++res;
                cout << i << "+" << j << "=" << i + j << endl;
            }
        }
    }
    cout << res;
    return 0;
}