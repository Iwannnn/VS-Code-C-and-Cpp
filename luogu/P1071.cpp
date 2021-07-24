/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-24 15:59:58
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1071.cpp
 */
#include <bits/stdc++.h>
using namespace std;
#define ERROR "Failed"
int main() {
    string encode, decode, code;
    vector<int> key(26, -1), judge(26, 0);
    cin >> encode >> decode >> code;
    for (int i = 0; i < encode.size(); i++) {
        if (key[encode[i] - 'A'] == -1) {
            key[encode[i] - 'A'] = decode[i] - 'A';
            ++judge[decode[i] - 'A'];
        } else if (key[encode[i] - 'A'] != decode[i] - 'A') {
            cout << ERROR;
            return 0;
        }
        if (judge[decode[i] - 'A'] > 1) {
            cout << ERROR;
            return 0;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (key[i] == -1) {
            cout << ERROR;
            return 0;
        }
    }
    for (int i = 0; i < code.length(); i++) {
        cout << (char)(key[code[i] - 'A'] + 'A');
    }
    return 0;
}