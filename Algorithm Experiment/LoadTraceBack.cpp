#include <bits/stdc++.h>
using namespace std;
#define num 100
int bestx[num] = {0};
int w[num];
int x[num];
int bestw = 0;
int cw = 0;
int n;
int c1;
int c2;
int bound(int t) {
    int rw = 0;
    for (int i = t + 1; t < n; t++)
        rw = rw + w[i];
    return (rw + cw);
}
void loadingRec(int t) {
    int i;
    if (t > n) {
        if (cw > bestw) {
            bestw = cw;
            for (i = 1; i <= n; i++)
                bestx[i] = x[i];
        };
        return;
    } else {
        if (cw + w[t] < c1) {
            x[t] = 1;
            cw = cw + w[t];
            loadingRec(t + 1);
            cw = cw - w[t];
            x[t] = 0;
        }
        if (bound(t) > bestw) loadingRec(t + 1);
    }
}
int main() {
    n = 4;
    w[1] = 4, w[2] = 5, w[3] = 3, w[4] = 2;
    c1 = 8;
    c2 = 7;
    cw = 0;
    bestw = 0;
    loadingRec(1);
    cout << "第一船的最优装载量为" << bestw;
    cout << "第一船的最优解为";
    for (int i = 1; i <= n; i++)
        cout << bestx[i] << " ";
    int cw2 = 0;
    for (int i = 0; i <= n; i++)
        if (bestx[i] == 0) cw2 += w[i];
    if (cw2 > c2)
        cout << "无解";
    else
        cout << "装入第二个有解";
    getchar();
}