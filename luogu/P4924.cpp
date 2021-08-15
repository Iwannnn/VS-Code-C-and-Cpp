/*
 * @Author: iwan
 * @Description:马猴烧酒
 * @Date: 2021-08-15 11:26:39
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P4924.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, m, num = 1;
vector<vector<int>> temp(510, vector<int>(510)), res(510, vector<int>(510));
void show() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << res[i][j] << " ";
        }
        cout << res[i][n - 1] << endl;
    }
}
void flip(int x, int y, int r, int z) {
    temp = res;
    int up = x - r, down = x + r, left = y - r, right = y + r;
    for (int i = up; i <= down; i++) {
        for (int j = left; j <= right; j++) {
            if (z == 0) res[up + j - left][right - i + up] = temp[i][j];
            if (z == 1) res[down - j + left][left + i - up] = temp[i][j];
        }
    }
}
int main() {
    int x, y, r, z;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            res[i][j] = num++;
    while (m--) {
        cin >> x >> y >> r >> z;
        flip(x - 1, y - 1, r, z);
    }
    show();
    return 0;
}