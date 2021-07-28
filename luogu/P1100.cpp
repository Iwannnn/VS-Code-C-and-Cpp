/*
 * @Author: iwan
 * @Description:int 高低位交换
 * @Date: 2021-07-27 16:35:12
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1100.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n, tmp;
    cin >> n;
    tmp = n >> 16;
    n <<= 16;
    n += tmp;
    cout << n;
    return 0;
}