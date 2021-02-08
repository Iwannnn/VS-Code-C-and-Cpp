#include <bits/stdc++.h>
using namespace std;
int main() {
    int map[60][60] = {{0}}, m, n, f[51][51][51][51] = {{{{0}}}};
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> map[i][j];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= m; k++) {
                for (int l = 1; l <= n; l++) {
                    f[i][j][k][l] =
                        max(max(f[i - 1][j][k - 1][l], f[i - 1][j][k][l - 1]),
                            max(f[i][j - 1][k - 1][l], f[i][j - 1][k][l - 1]))
                        + map[i][j] + map[k][l];
                    if (i == k && j == l)
                        f[i][j][k][l] -= map[i][j];
                }
            }
        }
    }
    cout << f[m][n][m][n];
}