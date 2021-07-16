/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-16 20:13:31
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1042.cpp
 */
#include <bits/stdc++.h>
using namespace std;
char game[100000];
int cnt = 0;
void show(int win_num) {
    int l = 0, r = 0;
    for (int i = 0; i < cnt; i++) {
        if (game[i] == 'W')
            l++;
        else
            r++;

        if ((l >= win_num || r >= win_num) && (abs(l - r) >= 2)) {
            cout << l << ":" << r << endl;
            l = 0, r = 0;
        }
    }
    cout << l << ":" << r << endl;
}
int main() {
    char ch;
    while (cin >> ch && ch != 'E') {
        if (ch == 'W' || ch == 'L') game[cnt++] = ch;
    }

    show(11);
    cout << endl;
    show(21);
    return 0;
}