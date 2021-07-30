/*
 * @Author: iwan
 * @Description:学生分组 多的和 少的和都要分掉
 * @Date: 2021-07-30 17:39:34
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1109.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l, r, sum = 0, more = 0, less = 0;
    vector<int> group_num(60), need(60);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> group_num[i];
        sum += group_num[i];
    }
    cin >> l >> r;
    for (int i = 1; i <= n; i++) {
        more += group_num[i] > r ? group_num[i] - r : 0;
        less += group_num[i] < l ? l - group_num[i] : 0;
    }
    if (sum > n * r)
        cout << "-1";
    else
        cout << max(less, more);
    return 0;
}