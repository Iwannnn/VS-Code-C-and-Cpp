/*
 * @Author: iwan
 * @Description:组合
 * @Date: 2021-08-06 11:28:10
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1157.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, r;
vector<int> res(30, 0);
void dfs(int index) {
    if (index > r) {
        for (int i = 1; i <= r; i++) {
            cout << setw(3) << res[i];
        }
        cout << endl;
        return;
    }
    for (int i = res[index - 1] + 1; i <= n; i++) { //从小到大
        res[index] = i;
        dfs(index + 1);
    }
}
int main() {
    cin >> n >> r;
    dfs(1);
    return 0;
}