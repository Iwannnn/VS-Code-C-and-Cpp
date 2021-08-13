/*
 * @Author: iwan
 * @Description:A+B
 * @Date: 2021-08-13 17:49:12
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1601.cpp
 */
#include <bits/stdc++.h>
using namespace std;
string add(string a, string b) {
    string res;
    int l1 = a.length(), l2 = b.length(), c = 0;
    if (l1 < l2)
        for (int i = 0; i < l2 - l1; i++)
            a = "0" + a;
    else
        for (int i = 0; i < l1 - l2; i++)
            b = "0" + b;
    l1 = a.length();
    for (int i = l1 - 1; i >= 0; i--) {
        int temp = a[i] - '0' + b[i] - '0' + c;
        c = temp / 10;
        res = char(temp % 10 + '0') + res;
    }
    return c != 0 ? res = char(c + '0') + res : res;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}