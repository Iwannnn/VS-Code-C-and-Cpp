/*
 * @Author: iwan
 * @Description: 要求 P, Q P,Q 以 x0为最大公约数，以 y0为最小公倍数
 * @Date: 2021-07-15 10:12:20
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1029.cpp
 */
#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}
int main() {
    int x0, y0, res = 0, flag = 0;
    cin >> x0 >> y0;
    if (x0 == y0) {
        cout << 1;
        return 0;
    }
    for (int i = 1; i < sqrt(x0 * y0); i++) {
        if (((long long)x0 * y0) % i == 0 && gcd(i, (long long)x0 * y0 / i) == x0) {
            ++res;
            if ((long long)i * i == (long long)x0 * y0) flag = 1;
        }
    }
    cout << res * 2 - flag;
    return 0;
}
// typedef long long ll;
// int m, n, res = 0, flag;
// ll gcd(ll x, ll y) {
//     if (y == 0) {
//         return x;
//     }
//     return gcd(y, x % y);
// }
// int main() {
//     cin >> n >> m;
//     for (int i = 1; i <= sqrt(1ll * m * n); i++) {
//         if ((1ll * n * m) % i == 0 && gcd(i, (1ll * n * m) / i) == n) {
//             ans++;
//             if (1ll * i * i == 1ll * n * m) flag = 1;
//         }
//     }
//     cout << ans * 2 - flag; //最后乘以二是因为只遍历了一半
//     return 0;
// }