#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, des_x, des_y, ans = -1;
    int map[10001][4];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> map[i][0] >> map[i][1] >> map[i][2] >> map[i][3];
        map[i][2] += map[i][0];
        map[i][3] += map[i][1];
    }
    cin >> des_x >> des_y;
    for (int i = n; i >= 1; i--) {
        if (map[i][0] <= des_x && map[i][2] >= des_x && map[i][1] <= des_y && map[i][3] >= des_y) {
            ans = i;
            break;
        }
    }
    cout << ans;
    system("pause");
}