/*
 * @Author: iwan
 * @Description:小鱼游泳
 * @Date: 2021-08-13 17:10:17
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1425.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((d - b) < 0 ? ((c - a < 0) ? c - a + 11 : c - a - 1) : ((c - a < 0) ? c - a + 24 : c - a)) << " "
         << ((d - b) < 0 ? d - b + 60 : (d - b));
    return 0;
}