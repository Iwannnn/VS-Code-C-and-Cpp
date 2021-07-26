/*
 * @Author: iwan
 * @Description:FBI串
 * @Date: 2021-07-25 18:50:18
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1087.cpp
 */
#include <bits/stdc++.h>
using namespace std;
string str;
void func(int low, int high) {
    if (high > low) {
        func(low, (low + high) / 2);
        func((low + high + 1) / 2, high);
    }
    bool B = true, I = true;
    for (int i = 0; i <= high - low; i++) {
        if (str[low + i] == '1') {
            B = false;
        } else if (str[low + i] == '0') {
            I = false;
        }
    }
    if (B)
        cout << "B";
    else if (I)
        cout << "I";
    else
        cout << "F";
}
int main() {
    int n;
    cin >> n >> str;
    func(0, (1 << n) - 1);
    return 0;
}
