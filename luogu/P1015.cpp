#include <bits/stdc++.h>
using namespace std;
int n, m, len;
char num[133], invert[133];
void pplus() {
    for (int i = 0; i < len; i++) {
        invert[len - 1 - i] = num[i];
    }
    len += 2;
    for (int i = 0; i < len; i++) {
        num[i] += invert[i];
        if (num[i] >= n) {
            num[i + 1]++;
            num[i] -= n;
        }
    }
    while (!num[len - 1])
        len--;
}
int judge() {
    for (int i = 0; i < len; i++)
        if (num[i] != num[len - i - 1]) return 0;
    return 1;
}
int main() {
    int ans = 0;
    cin >> n >> num;
    len = strlen(num);
    for (int i = 0; i < len; i++) {
        if (num[i] >= '0' && num[i] <= '9')
            num[i] -= '0';
        else
            num[i] = num[i] - 'A' + 10;
    }
    while (!judge()) {
        ans++;
        if (ans > 30)
            break;
        pplus();
    }
    if (ans <= 30)
        cout << "STEP=" << ans << endl;
    else
        cout << "Impossible!" << endl;
}