/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-31 20:13:53
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1125.cpp
 */
#include <bits/stdc++.h>
using namespace std;
void is_prime(int n) {
    if (n < 2) {
        cout << "No Answer" << endl << 0;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "No Answer" << endl << 0;
            return;
        }
    }
    cout << "Lucky Word" << endl << n;
}
int main() {
    string str;
    vector<int> alphabets(26, 0);
    int maxn = INT_MIN, minn = INT_MAX;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        ++alphabets[str[i] - 'a'];
    }
    for (int i = 0; i < str.size(); i++) {
        maxn = max(maxn, alphabets[str[i] - 'a']);
        minn = min(minn, alphabets[str[i] - 'a']);
    }
    is_prime(maxn - minn);
    return 0;
}