/*
 * @Author: iwan
 * @Description:肥宅快乐水
 * @Date: 2021-08-13 17:04:16
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P5706.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    double t;
    int n;
    cin >> t >> n;
    cout << setprecision(3) << fixed << double(t / n) << endl << n * 2;
    return 0;
}