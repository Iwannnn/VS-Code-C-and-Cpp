/*
 * @Author: iwan
 * @Description:a*b
 * @Date: 2021-08-14 19:31:07
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1303.cpp
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
string multiply(string a, string b) {
    string res, temp_res;
    int bi;
    int l1 = a.length(), l2 = b.length(), c = 0;
    for (int i = l2 - 1; i >= 0; i--) {
        temp_res = "";
        bi = b[i] - '0';
        c = 0;
        if (bi != 0) {
            for (int j = 0; j < l2 - 1 - i; j++)
                temp_res += "0";
            for (int j = l1 - 1; j >= 0; j--) {
                int s = (bi * (a[j] - '0')) + c;
                c = s / 10;
                temp_res = char(s % 10 + '0') + temp_res;
            }
            temp_res = c != 0 ? char(c + '0') + temp_res : temp_res;
        }
        res = add(res, temp_res);
    }
    return c != 0 ? res = char(c + '0') + res : res;
}
int main() {
    string a, b;
    cin >> a >> b;
    if (a == "0" || b == "0")
        cout << 0;
    else
        cout << multiply(a, b) << endl;
    return 0;
}