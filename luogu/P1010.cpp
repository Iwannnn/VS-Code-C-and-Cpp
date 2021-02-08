#include <bits/stdc++.h>
using namespace std;
void fun(int n) {
    int l = 0, b[20] = {0}, i, flag = 0;
    if (n == 1) {
        cout << "2(0)";
    } else if (n == 2) {
        cout << "2";
    } else {
        while (n != 0) {
            l++;
            b[l] = n % 2;
            n /= 2;
        }
        for (i = l; i >= 1; i--) {
            if (b[i] != 0 && i > 2) {
                if (flag == 0)
                    flag = 1;
                else
                    cout << "+";
                cout << "2(";
                fun(i - 1);
                cout << ")";
            } else if (b[i] != 0 && i == 2) {
                if (flag == 0)
                    flag = 1;
                else
                    cout << "+";
                cout << "2";
            } else if (b[i] != 0 && i == 1) {
                if (flag == 0)
                    flag = 1;
                else
                    cout << "+";
                cout << "2(0)";
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    fun(n);
    return 0;
}