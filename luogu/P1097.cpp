/*
 * @Author: iwan
 * @Description:数数
 * @Date: 2021-07-26 15:46:27
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1097.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> num;
    set<int> res;
    int n, index;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> index;
        num[index]++;
        res.insert(index);
    }
    for (auto it : res)
        cout << it << " " << num[it] << endl;
    return 0;
}