/*
 * @Author: iwan
 * @De_mapcription:01 搜索
 * @Date: 2021-08-03 16:37:58
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1141.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, m, res[100002], old[1002][1002];
char _map[1002][1002];
void dfs(int x, int y, int z, int index) {
    if (x < 0 || x >= n || y < 0 || y >= n || old[x][y] != -1 || _map[x][y] - '0' != z) return;
    old[x][y] = index;
    ++res[index];
    dfs(x - 1, y, !z, index);
    dfs(x + 1, y, !z, index);
    dfs(x, y - 1, !z, index);
    dfs(x, y + 1, !z, index);
}
int main() {
    int x, y;
    cin >> n >> m;
    memset(old, -1, sizeof(old));
    for (int i = 0; i < n; i++)
        cin >> _map[i];
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--;
        y--;
        if (old[x][y] == -1)
            dfs(x, y, _map[x][y] - '0', i);
        else
            res[i] = res[old[x][y]];
    }
    for (int i = 0; i < m; i++)
        cout << res[i] << endl;
    return 0;
}