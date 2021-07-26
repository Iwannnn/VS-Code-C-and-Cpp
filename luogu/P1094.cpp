/*
 * @Author: iwan
 * @Description:纪念平分组
 * @Date: 2021-07-26 15:31:53
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1094.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, n, res = 0, first = 1;
    vector<int> price(100000);
    cin >> w >> n;
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }
    sort(price.begin() + 1, price.begin() + 1 + n);
    for (int i = n; i >= first; i--) {
        if (price[i] + price[first] <= w)
            ++res, ++first;
        else
            ++res;
    }
    cout << res;
    return 0;
}