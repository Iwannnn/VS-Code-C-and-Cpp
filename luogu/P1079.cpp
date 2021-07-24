/*
 * @Author: iwan
 * @Descodeription:密钥加密
 * @Date: 2021-07-24 16:29:20
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1079.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    string key, code;
    cin >> key >> code;
    for (int i = 0; i < code.length(); i++) {
        // int dert = (key[i % key.length()] & 31) - 1;
        int dert = (char)key[i % key.length()] >= 'a' ? key[i % key.length()] - 'a' : key[i % key.length()] - 'A';
        code[i] = (code[i] & 31) - dert > 0 ? code[i] - dert : code[i] - dert + 26;
    }
    cout << code;
    return 0;
}