/*
 * @Author: iwan
 * @Description:高精度阶乘 n! 中 a 出现的次数
 * @Date: 2021-08-18 16:21:30
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1591.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num[10000];
    int t, n, a;
    cin >> t;
    while (t--) {
        int res = 0;
        cin >> n >> a;
        memset(num, 0, sizeof(num));
        num[0] = 1;
        int size = 1;
        for (int i = 2; i <= n; i++) {
            int ci = 0;
            for (int j = 0; j < size; j++) {
                num[j] = num[j] * i + ci;
                ci = num[j] / 10;
                num[j] %= 10;
            }
            while (ci > 0) {
                num[size] = ci % 10;
                ++size;
                ci /= 10;
            }
        }
        for (int i = 0; i < size; i++)
            if (num[i] == a) ++res;
        cout << res << endl;
    }
    return 0;
}