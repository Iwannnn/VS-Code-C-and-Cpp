/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-15 21:21:16
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1031.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, nums[123], total = 0, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i], total += nums[i];
    total /= n;
    for (int i = 0; i < n; i++)
        if (nums[i] - total) nums[i + 1] += nums[i] - total, ++res;
    cout << res;
    return 0;
}