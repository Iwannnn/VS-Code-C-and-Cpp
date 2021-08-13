/*
 * @Author: iwan
 * @Description:字母转换
 * @Date: 2021-08-13 16:49:38
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P5704.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    cout << (char)(ch + 'A' - 'a') << endl;
    return 0;
}