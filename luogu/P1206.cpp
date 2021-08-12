/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-08-12 13:26:53
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1206.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int b;
class num {
  public:
    int l, n[24];
    num(int x) {
        l = 0;
        while (x) {
            n[l++] = x % b;
            x /= b;
        }
    }
    char tran(int x) {
        return x >= 0 && x <= 9 ? x + '0' : 'A' + x - 10;
    }
    void print() {
        for (int i = l - 1; i >= 0; i--)
            cout << tran(n[i]);
    }
    bool isValid() {
        for (int i = 0; i < l; i++) {
            if (n[i] != n[l - i - 1]) return false;
        }
        return true;
    }
};
int main() {
    cin >> b;
    for (int i = 1; i <= 300; i++) {
        num x(i * i);
        if (x.isValid()) {
            num a(i);
            a.print();
            cout << " ";
            x.print();
            cout << endl;
        }
    }
    return 0;
}
