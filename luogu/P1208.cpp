/*
 * @Author: iwan
 * @Description:混合牛奶
 * @Date: 2021-08-12 13:55:40
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1208.cpp
 */
#include <bits/stdc++.h>
using namespace std;
struct cow {
    int p, a;
};
bool cmp(cow a, cow b) {
    return a.p < b.p;
}
int main() {
    int n, m, l = 0, res = 0;
    vector<cow> f(5010);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> f[i].p >> f[i].a;
    sort(f.begin(), f.begin() + m, cmp);
    for (int i = 0; l < n; i++) {
        res += (f[i].a < n - l) ? f[i].p * f[i].a : f[i].p * (n - l);
        l += (f[i].a < n - l) ? f[i].a : (n - l);
    }
    cout << res;
    return 0;
}