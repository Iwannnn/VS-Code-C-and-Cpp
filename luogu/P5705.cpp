/*
 * @Author: iwan
 * @Description:数字反转
 * @Date: 2021-08-13 16:57:41
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P5705.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    for (int i = n.size() - 1; i >= 0; i--)
        cout << n[i];
}