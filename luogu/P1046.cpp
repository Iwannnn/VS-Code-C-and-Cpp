#include <bits/stdc++.h>
using namespace std;
/*
 * @Author: iwan
 * @Description:陶陶摘苹果，10个苹果摘几个
 * @Date: 2021-07-14 17:44:04
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1046.cpp
 */

int main() {
    int apple_high[10];
    int taotao_high, tmp, res = 0;
    for (int i = 0; i < 10; i++)
        cin >> apple_high[i];
    cin >> taotao_high;
    taotao_high += 30;
    for (int i = 0; i < 10; ++i) {
        if (apple_high[i] <= taotao_high) res++;
    }
    cout << res;
    return 0;
}
