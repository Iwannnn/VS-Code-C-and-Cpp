/*
 * @Author: iwan
 * @Description:两头 塔姆沃斯 牛
 * @Date: 2021-08-18 15:29:30
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1518.cpp
 */
#include <bits/stdc++.h>
using namespace std;
char _map[12][12];
int f_x, f_y, c_x, c_y, dir_f = 1, dir_c = 1, res = 0; // 1 上 2 右 3 下 4 左
void move(int x, int y, int dir, int id) {
    if (dir == 1) {
        if (_map[x - 1][y] == '*') {
            if (id == 0)
                dir_f = 2;
            else
                dir_c = 2;
        } else {
            if (id == 0)
                --f_x;
            else
                --c_x;
        }
    } else if (dir == 2) {
        if (_map[x][y + 1] == '*') {
            if (id == 0)
                dir_f = 3;
            else
                dir_c = 3;
        } else {
            if (id == 0)
                ++f_y;
            else
                ++c_y;
        }
    } else if (dir == 3) {
        if (_map[x + 1][y] == '*') {
            if (id == 0)
                dir_f = 4;
            else
                dir_c = 4;
        } else {
            if (id == 0)
                ++f_x;
            else
                ++c_x;
        }
    } else {
        if (_map[x][y - 1] == '*') {
            if (id == 0)
                dir_f = 1;
            else
                dir_c = 1;
        } else {
            if (id == 0)
                --f_y;
            else
                --c_y;
        }
    }
}
bool tick() {
    if (f_x == c_x && f_y == c_y)
        return false;
    else
        return true;
}
int main() {
    bool death[10][10][10][10][4][4] = {false};
    for (int i = 0; i < 13; i++)
        _map[i][0] = _map[i][11] = _map[0][i] = _map[11][i] = '*';
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> _map[i][j];
            if (_map[i][j] == 'F') f_x = i, f_y = j;
            if (_map[i][j] == 'C') c_x = i, c_y = j;
        }
    }
    while (tick()) {
        if (death[f_x - 1][f_y - 1][c_x - 1][c_y - 1][dir_f - 1][dir_c - 1] == true) {
            cout << 0;
            return 0;
        }
        death[f_x - 1][f_y - 1][c_x - 1][c_y - 1][dir_f - 1][dir_c - 1] = true;
        move(f_x, f_y, dir_f, 0);
        move(c_x, c_y, dir_c, 1);
        ++res;
    }
    cout << res << endl;
    return 0;
}