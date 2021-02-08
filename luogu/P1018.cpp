#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0, ans1 = 0, ans2 = 0, temp = 0;
    int high[100010] = {0}, num1[100010];
    while (scanf("%d", &high[++n]) == 1)
        temp++;
    n--;
    for (int i = n; i >= 1; i--) { //!如果拦截了这个导弹还能拦截多少个
        num1[i] = 1;
        for (int j = i + 1; j <= n; j++) {
            if (high[j] <= high[i]) {
                num1[i] = max(num1[i], num1[j] + 1);
            }
        }
        ans1 = max(num1[i], ans1);
    }
    for (int i = 1; i <= n; i++) { //!变化
        num1[i] = 1;
        for (int j = 1; j < i; j++) {
            if (high[j] < high[i]) {
                num1[i] = max(num1[i], num1[j] + 1);
            }
        }
        ans2 = max(ans2, num1[i]);
    }
    cout << ans1 << " " << ans2 << endl;
}