/*
 * @Author: iwan
 * @Description:集装箱操作 两个栈模拟
 * @Date: 2021-08-09 15:22:10
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1165.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, op, w;
    stack<int> s, m;
    cin >> n;
    while (n--) {
        cin >> op;
        if (op == 0) {
            cin >> w;
            s.push(w);
            if (m.empty() || w > m.top())
                m.push(w);
            else
                m.push(m.top());
        }
        if (op == 1) {
            m.pop();
            s.pop();
        }
        if (op == 2) {
            if (m.empty())
                cout << 0 << endl;
            else
                cout << m.top() << endl;
        }
    }
    return 0;
}