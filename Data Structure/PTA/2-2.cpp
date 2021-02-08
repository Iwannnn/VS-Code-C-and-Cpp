#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, temp, time = 0, flag = 0;
    int a[1234] = {0}, b[1234] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp % 2 == 1) {
            a[i] = temp;
            b[i] = 0;
        } else {
            a[i] = 0;
            b[i] = temp;
        }
    }
    int i = 0, j = 0;
    while ((i != n + 1 && j != n) || (i != n && j != n + 1)) {
        while (a[i] == 0 && i <= n) {
            i++;
        }
        if (a[i] != 0) {
            if (flag == 0) {
                cout << a[i];
                flag = 1;
            } else {
                cout << " " << a[i];
            }
            i++;
        }
        time++;
        while (b[j] == 0 && j <= n) {
            j++;
        }
        if (time % 2 == 0 && b[j] != 0) {
            if (flag == 0) {
                cout << b[j];
                flag = 1;
            } else {
                cout << " " << b[j];
            }
            j++;
        }
    }
    system("pause");
}