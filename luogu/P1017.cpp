#include <bits/stdc++.h>
using namespace std;
void fun(int n, int r) {
    if (n == 0) return;
    int o = n % r;
    if (o < 0) {
        o -= r;
        n += r;
    }
    if (o >= 10) {
        o = 'A' + o - 10;
    } else {
        o += '0';
    }
    fun(n / r, r);
    cout << char(o);
}
int main() {
    int n, r;
    cin >> n >> r;
    cout << n << "=";
    fun(n, r);
    cout << "(base" << r << ")";
    system("pause");
}