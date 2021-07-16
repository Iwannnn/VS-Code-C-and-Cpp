/*
 * @Author: iwan
 * @Description: n个数 k个数的和 素数个数
 * @Date: 2021-07-16 19:00:08
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1036.cpp
 */

#include <bits/stdc++.h>
using namespace std;

int n, k, res = 0;
vector<int> x(100);
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i < sqrt(num); i++)
        if (num % i == 0) return false;
    return true;
}

int dfs(int left_num, int sum, int start, int end) {
    int res = 0;
    if (left_num == 0) return isPrime(sum);
    for (int i = start; i <= end; ++i) {
        res += dfs(left_num - 1, sum + x[i], i + 1, end);
    }
    return res;
}
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    cout << dfs(k, 0, 0, n - 1);
    return 0;
}
