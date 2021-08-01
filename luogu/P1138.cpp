/*
 * @Author: iwan
 * @Description:第k小整数
 * @Date: 2021-08-01 17:15:13
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1138.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l;
    vector<int> num(10000);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num.begin(), num.begin() + n);
    l = unique(num.begin(), num.begin() + n) - num.begin();
    if (k < l)
        cout << num[k - 1] << endl;
    else
        cout << "NO RESULT" << endl;
    return 0;
}