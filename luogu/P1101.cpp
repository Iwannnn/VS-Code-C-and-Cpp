/*
 * @Author: iwan
 * @Description:矩阵搜索单词
 * @Date: 2021-07-27 17:05:38
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1101.cpp
 */
#include <bits/stdc++.h>
using namespace std;
vector<string> p(120);
string standard = "yizhong";
vector<vector<int>> res(120, vector<int>(120, 0));
vector<int> u = {0, 0, -1, -1, -1, 1, 1, 1}, v = {-1, 1, -1, 0, 1, -1, 0, 1};
int n;
void dfs(int x, int y, int k, int cur) {
    int dx = x + u[k], dy = y + v[k];
    if (cur == standard.size()) {
        for (int i = 0; i < standard.size(); i++) {
            res[x - i * u[k]][y - i * v[k]] = 1;
            // cout << x - i * kx << " " << y - i * ky << endl;
        }
    } else if ((dx >= 0 && dx < n && dy >= 0 && dy < p[0].size()) && (p[dx][dy] == standard[cur])) {
        ++cur;
        dfs(dx, dy, k, cur);
    } else {
        return;
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p[i].size(); j++) {
            if (p[i][j] == standard[0]) {
                for (int k = 0; k < 8; k++) {
                    dfs(i, j, k, 1);
                }
                // cout << i << " " << j << endl;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p[i].size(); j++) {
            if (res[i][j])
                cout << p[i][j];
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}