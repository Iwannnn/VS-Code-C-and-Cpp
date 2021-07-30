/*
 * @Author: iwan
 * @Description:平台贪心找最高
 * @Date: 2021-07-30 16:55:52
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1105.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int> h(1010), r(1010), l(1010);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> h[i] >> l[i] >> r[i];
    }
    for (int i = 1; i <= n; i++) {
        int res_l = 0, res_r = 0;
        for (int j = 1; j <= n; j++) {
            if (h[j] < h[i] && l[j] < l[i] && r[j] > l[i])
                if (h[res_l] < h[j]) res_l = j;
            if (h[j] < h[i] && l[j] < r[i] && r[j] > r[i])
                if (h[res_r] < h[j]) res_r = j;
        }
        cout << res_l << " " << res_r << endl;
    }
    return 0;
}