#include <bits/stdc++.h>
using namespace std;
int a[2333] = {0}, ans[2333] = {0};
void Plus(int *ans, int *a) {
    int k = 0;
    for (int i = 1; i <= 2333; i++) {
        ans[i] += a[i] + k;
        k = ans[i] / 10;
        ans[i] %= 10;
    }
}
void Mult(int *a, int n) {
    int k = 0;
    for (int i = 1; i <= 2333; i++) {
        a[i] = a[i] * n + k;
        k = a[i] / 10;
        a[i] %= 10;
    }
}
int main() {
    int n, flag = 0;
    cin >> n;
    a[1] = 1;
    for (int i = 1; i <= n; i++) {
        Mult(a, i);
        Plus(ans, a);
    }
    for (int i = 2333; i >= 1; i--) {
        if (ans[i] != 0) flag = 1;
        if (flag == 1) cout << ans[i];
    }
}