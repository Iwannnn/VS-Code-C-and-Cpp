/*
 * @Author: iwan
 * @Description:贪婪的送礼者
 * @Date: 2021-08-11 11:47:33
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1201.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, m, n;
    string name;
    vector<string> names(20);
    map<string, int> res;
    cin >> l;
    for (int i = 0; i < l; i++)
        cin >> names[i];
    for (int i = 0; i < l; i++) {
        cin >> name >> m >> n;
        int average = m == 0 ? 0 : m / n;
        res[name] -= average * n;
        for (int i = 0; i < n; i++) {
            cin >> name;
            res[name] += average;
        }
    }
    for (int i = 0; i < l; i++)
        cout << names[i] << " " << res[names[i]] << endl;
    return 0;
}