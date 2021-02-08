#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, map[15][15] = {{0}}, f[15][15][15][15] = {{{{0}}}}, x, y, value;
    cin >> n;
    cin >> x >> y >> value;
    do {
        map[x][y] = value;
        cin >> x >> y >> value;
    } while (x != 0 && y != 0 && value != 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                for (int l = 1; l <= n; l++) {
                    f[i][j][k][l] =
                        max(max(f[i - 1][j][k - 1][l], f[i - 1][j][k][l - 1]),
                            max(f[i][j - 1][k - 1][l], f[i][j - 1][k][l - 1]))
                        + map[i][j] + map[k][l];
                    if (i == k && j == l) f[i][j][k][l] -= map[i][j];
                }
            }
        }
    }
    cout << f[n][n][n][n] << endl;
}