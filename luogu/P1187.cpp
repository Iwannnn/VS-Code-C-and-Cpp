/*
 * @Author: iwan
 * @Description:3d
 * @Date: 2021-08-10 13:37:47
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1187.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    int res_up = 0, res_front = 0, res_side = 0;
    char input;
    vector<vector<int>> height(1010, vector<int>(1010, 0));
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> input;
            height[i][j] = input - '0';
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (height[i][j] > 0) ++res_up;
        }
    for (int j = 1; j <= m; j++) {
        res_front += height[1][j];
        for (int i = 2; i <= n; i++) {
            res_front += (height[i][j] > height[i - 1][j]) ? height[i][j] - height[i - 1][j] : 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        res_side += height[i][1];
        for (int j = 2; j <= m; j++) {
            res_side += (height[i][j] > height[i][j - 1]) ? height[i][j] - height[i][j - 1] : 0;
        }
    }
    cout << (res_up + res_front + res_side) * 2 << endl;
    return 0;
}