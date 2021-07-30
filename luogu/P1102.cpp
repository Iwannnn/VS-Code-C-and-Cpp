/*
 * @Author: iwan
 * @Description:A-B
 * @Date: 2021-07-28 17:50:40
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1102.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, c, res = 0;
vector<int> num(200010);
int main() {
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    sort(num.begin() + 1, num.begin() + 1 + n);
    for (int i = 1; i <= n; i++) {
        res += ((upper_bound(num.begin() + 1, num.begin() + 1 + n, num[i] + c) - num.begin()) -
                (lower_bound(num.begin() + 1, num.begin() + 1 + n, num[i] + c) - num.begin()));
    }
    cout << res;
    return 0;
}