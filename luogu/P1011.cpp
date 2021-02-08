#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n, m, x;
    int index_a[30], index_b[30];
    cin >> a >> n >> m >> x;
    index_a[2] = 1;
    index_a[3] = 2;
    index_b[2] = 0;
    index_b[3] = 0;
    for (int i = 4; i <= n; i++) {
        index_a[i] = index_a[i - 1] + index_a[i - 2] - 1;
        index_b[i] = index_b[i - 1] + index_b[i - 2] + 1;
    }
    b = (m - index_a[n - 1] * a) / index_b[n - 1];
    cout << index_a[x] * a + index_b[x] * b;
    return 0;
}