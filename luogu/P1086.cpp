/*
 * @Author: iwan
 * @Description:贪心
 * @Date: 2021-07-25 15:22:35
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1086.cpp
 */
#include <bits/stdc++.h>
using namespace std;
struct peanut {
    int x, y, time, num;
};
bool cmp(peanut x, peanut y) {
    return x.num > y.num;
}
int main() {
    int m, n, k, cnt = 1, back_time, res = 0;
    int a[100][100];
    // peanut p[10000];
    vector<peanut> p(1000);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] > 0) {
                p[cnt].x = i;
                p[cnt].y = j;
                p[cnt].num = a[i][j];
                ++cnt;
            }
        }
    }
    sort(p.begin() + 1, p.begin() + cnt, cmp);
    for (int i = 1; i < cnt; i++) {
        back_time = p[i].x;
        if (i == 1)
            p[i].time = p[i].x + 1;
        else
            p[i].time = p[i - 1].time + abs(p[i].x - p[i - 1].x) + abs(p[i].y - p[i - 1].y) + 1;
        if (p[i].time + back_time <= k) res += p[i].num;
    }
    cout << res;
    return 0;
}