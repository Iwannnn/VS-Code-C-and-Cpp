#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, n, temp = 0, maxt = 0, mint = 0;
    cin >> l >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        mint = max(mint, min(l - temp + 1, temp));
        maxt = max(maxt, max(l - temp + 1, temp));
    }
    cout << mint << " " << maxt << endl;
}