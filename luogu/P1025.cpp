/*
 * @Author: iwan
 * @Description:n个数字划分k份
 * @Date: 2020-12-05 17:54:42
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1025.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, k, res;
void dfs(int pre, int sum, int cur) {
    if (cur == k) {
        if (sum == n) ++res;
        return;
    }
    for (int i = pre; sum + i * (k - cur) <= n; i++) {
        dfs(i, sum + i, cur + 1);
    }
}
int main() {
    cin >> n >> k;
    dfs(1, 0, 0);
    cout << res;
    return 0;
}