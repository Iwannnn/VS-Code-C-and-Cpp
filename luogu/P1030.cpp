/*
 * @Author: iwan
 * @Description:后序中序求先序
 * @Date: 2021-07-15 20:53:17
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1030.cpp
 */
#include <bits/stdc++.h>
using namespace std;
string dlr(string ldr, string lrd) {
    if (ldr.size() > 0) {
        char ch = lrd[lrd.size() - 1];
        int d = ldr.find(ch);
        string res = ch + dlr(ldr.substr(0, d), lrd.substr(0, d)) + dlr(ldr.substr(d + 1), lrd.substr(d, ldr.size() - d - 1));
        return res;
    }
    return "";
}
int main() {
    string ldr, lrd;
    cin >> ldr;
    cin >> lrd; //读入
    cout << dlr(ldr, lrd);
    return 0;
}