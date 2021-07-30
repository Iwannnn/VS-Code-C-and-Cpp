/*
 * @Author: iwan
 * @Description:产生数
 * @Date: 2021-07-28 21:27:38
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1037.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    long long int k, res = 1;
    vector<int> index(10, 1), cnt(10, 0);
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        ++index[tmp1];
    }
    for (int i = 0; i < n.size(); i++) {
        ++cnt[n[i] - '0'];
    }
    for (int i = 0; i <= 9; i++) {
        if (index[i] != 1) {
            res *= pow(index[i], cnt[i]);
        }
    }
    cout << res;
    return 0;
}