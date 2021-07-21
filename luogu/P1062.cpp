/*
 * @Author: iwan
 * @Description:进制问题 把输入的数转成二进制二进制的每一位是他的指数
 * @Date: 2021-07-20 21:31:05
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1062.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int k, n, res = 0;
    stack<int> s;
    cin >> k >> n;
    while (n) {
        s.push(n & 1);
        n >>= 1;
    }
    while (!s.empty()) {
        res += s.top() * pow(k, s.size() - 1);
        s.pop();
    }
    cout << res << endl;
    return 0;
}