#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
        cout << i;
    for (int i = 0; i < n; i++) {
        n += i;
    }

    cout << n;
    system("pause");
}