#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y) {
    int t;
    t = x;
    x = y;
    y = t;
}

void sort(int w[], int t[], int n) {
    for (int m = 0; m < n; ++m) {
        t[m] = m;
    }
    int i, j;
    int lastExchangeIndex;
    i = n - 1;
    while (i > 0) {
        lastExchangeIndex = 0;
        for (int j = 0; j < i; ++j) {
            if (w[j + 1] < w[j]) {
                swap(w[j + 1], w[j]);
                lastExchangeIndex = j;
                swap(t[j], t[j + 1]);
            }
        }
        i = lastExchangeIndex;
    }
}
void loading(int x[], int w[], int c, int n, int *t) {
    sort(w, t, n);
    for (int i = 0; i < n; ++i) {
        x[i] = 0;
    }
    for (int j = 0; j < n && w[t[j]] <= c; ++j) {
        x[t[j]] = 1;
        c -= w[t[j]];
    }
}
int main() {
    int n, c;
    cout << "请输入物品个数:";
    cin >> n;
    cout << "请输入最大容量:";
    cin >> c;
    int x[200], w[200];
    for (int i = 0; i < n; ++i) {
        cout << "请输入第" << i << "个物品重量";
        cin >> w[i];
    }
    int *t = new int[n];
    for (int j = 0; j < n; ++j) {
        x[j] = 0;
    }
    loading(x, w, c, n, t);
    cout << "装入物品编号为";
    for (int k = 0; k < n; ++k) {
        if (x[k] == 1) cout << t[k] + 1 << " ";
    }
}