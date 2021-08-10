/*
 * @Author: iwan
 * @Description: 泡小萝莉
 * @Date: 2021-08-10 13:00:09
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1184.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, res = 0;
    string tmp;
    set<string> meet;
    cin >> n >> m;
    getline(cin, tmp);
    for (int i = 1; i <= n; i++) {
        getline(cin, tmp);
        if (tmp[tmp.size() - 1] != (char)13) tmp += (char)13;
        meet.insert(tmp);
    }
    for (int i = 1; i <= m; i++) {
        getline(cin, tmp);
        if (tmp[tmp.size() - 1] != (char)13) tmp += (char)13;
        if (meet.find(tmp) != meet.end()) ++res;
    }
    cout << res;
    return 0;
}