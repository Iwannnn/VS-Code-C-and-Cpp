/*
 * @Author: iwan
 * @Description:字符串处理
 * @Date: 2021-07-20 20:49:11
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1055.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int sum = 0, cnt = 1;
    char res[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'X'};
    cin >> str;
    for (int i = 0; i < 11; i++) {
        if (str[i] != '-') {
            sum += (int)(str[i] - '0') * cnt++;
        }
    }
    if (res[sum % 11] == str[12]) {
        cout << "Right";
    } else {
        str[12] = res[sum % 11];
        cout << str;
    }
    return 0;
}