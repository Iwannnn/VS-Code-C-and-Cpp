#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, s[20] = {0}, num[20];
    cin >> n >> k;
    num[0] = 1;
    s[0] = num[0] * n;
    for (int i = 1; i < k; i++) {
        num[i] = s[i - 1];
        for (int j = 0; j < n; j++) {
            if (j < i) s[i] += num[j];
            if (j >= i && j <= i + 1) s[i] += num[i];
        }
    }
    cout << num[0];
    for (int i = 1; i < k; i++)
        cout << " " << num[i];
    cout << endl
         << "MAX=" << s[k - 1] << endl;
    system("pause");
}