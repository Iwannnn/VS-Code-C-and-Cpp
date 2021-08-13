/*
 * @Author: iwan
 * @Description:扫雷
 * @Date: 2021-08-13 17:25:22
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P2670.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<char>> _map(110, vector<char>(110));
vector<int> u = {-1, -1, -1, 0, 0, 1, 1, 1}, v = {1, 0, -1, 1, -1, 1, 0, -1};
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> _map[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (_map[i][j] == '*') {
                cout << '*';
                continue;
            }
            int res = 0;
            for (int k = 0; k < 8; k++) {
                int x = i + u[k], y = j + v[k];
                if (x >= 0 && x < n && y >= 0 && y < m && _map[x][y] == '*') ++res;
            }
            cout << res;
        }
        cout << endl;
    }
    return 0;
}