/*
 * @Author: iwan
 * @Description:填涂颜色
 * @Date: 2021-08-09 12:53:01
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1162.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> m(35, vector<int>(35, -1));
void dfs(int x, int y) {
    if (x < 0 || x > n + 1 || y < 0 || y > n + 1) return;
    if (m[x][y] == 1 || m[x][y] == 3)
        return;
    else
        m[x][y] = 3;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> m[i][j];
    dfs(0, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n; j++) {
            if (m[i][j] == 3) cout << 0 << " ";
            if (m[i][j] == 1) cout << 1 << " ";
            if (m[i][j] == 0) cout << 2 << " ";
        }
        if (m[i][n] == 3) cout << 0 << endl;
        if (m[i][n] == 1) cout << 1 << endl;
        if (m[i][n] == 0) cout << 2 << endl;
    }
    return 0;
}