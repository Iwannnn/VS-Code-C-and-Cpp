#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    char c, ch;
    int flag_num = 0, pplus = 1, now = 1, b = 0, k_ch = 0, x = 0;
    while (cin >> c) {
        if (c == '+') {
            b += now * pplus * x;
            x = 0;
            pplus = 1;
            flag_num = 0;
        }
        if (c == '-') {
            b += now * pplus * x;
            x = 0;
            pplus = -1;
            flag_num = 0;
        }
        if (c == '=') {
            b += now * pplus * x;
            x = 0;
            pplus = 1;
            now = -1;
            flag_num = 0;
        }
        if (c >= 'a' && c <= 'z') {
            if (flag_num) {
                k_ch += now * pplus * x;
                x = 0;
            } else {
                k_ch += now * pplus;
            }
            ch = c;
            flag_num = 0;
        }
        if (c >= '0' && c <= '9') {
            x = x * 10 + c - '0';
            flag_num = 1;
        }
    }
    b += now * pplus * x;
    double ans = double(-b * 1.0 / k_ch);
    if (ans == -0.0) ans = 0;
    printf("%c=%.3lf", ch, ans);
}