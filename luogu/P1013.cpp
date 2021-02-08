#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i = 0, j = 0;
    cin >> n;
    while (n > j) {
        i++;
        j += i;
    }
    if (i % 2 == 1) {
        cout << j - n + 1 << "/" << n + i - j << endl;
    } else if (i % 2 == 0) {
        cout << n + i - j << "/" << j - n + 1 << endl;
    }
}