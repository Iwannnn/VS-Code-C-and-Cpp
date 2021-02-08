#include <bits/stdc++.h>
using namespace std;
int n, m;
struct Data {
    int num[666], len;
    Data() {
        memset(num, 0, sizeof num);
        len = 0;
    }
    void print() {
        printf("%d", num[len]);
        for (int i = len - 1; i > 0; i--) {
            if (num[i] == 0) {
                cout << "0000";
                continue;
            }
            for (int k = 10; k * num[i] < 10000; k *= 10)
                cout << "0";
            printf("%d", num[i]);
        }
    }
} f[88][88], b[88], ans;
Data operator+(const Data &a, const Data &b) {
    Data c;
    c.len = max(a.len, b.len);
    int x = 0;
    for (int i = 1; i <= c.len; i++) {
        c.num[i] = a.num[i] + b.num[i] + x;
        x = c.num[i] / 10000;
        c.num[i] %= 10000;
    }
    if (x > 0)
        c.num[++c.len] = x;
    return c;
}
Data operator*(const Data &a, const int &b) {
    Data c;
    c.len = a.len;
    int x = 0;
    for (int i = 1; i <= c.len; i++) {
        c.num[i] = a.num[i] * b + x;
        x = c.num[i] / 10000;
        c.num[i] %= 10000;
    }
    while (x > 0)
        c.num[++c.len] = x % 10000, x /= 10000;
    return c;
}
Data max(const Data &a, const Data &b) {
    if (a.len > b.len)
        return a;
    else if (a.len < b.len)
        return b;
    for (int i = a.len; i > 0; i--)
        if (a.num[i] > b.num[i])
            return a;
        else if (a.num[i] < b.num[i])
            return b;
    return a;
}
void bbb() {
    b[0].num[1] = 1;
    b[0].len = 1;
    for (int i = 1; i <= m + 1; i++)
        b[i] = b[i - 1] * 2;
}
int main() {
    int r[88];
    cin >> n >> m;
    bbb();
    while (n--) {
        memset(f, 0, sizeof(f));
        memset(r, 0, sizeof(r));
        for (int i = 1; i <= m; i++)
            cin >> r[i];
        for (int i = 1; i <= m; i++)
            for (int j = m; j >= i; j--) {
                f[i][j] =
                    max(f[i][j], f[i - 1][j] + b[m - j + i - 1] * r[i - 1]);
                f[i][j] =
                    max(f[i][j], f[i][j + 1] + b[m - j + i - 1] * r[j + 1]);
            }
        Data Max;
        for (int i = 1; i <= m; i++)
            Max = max(Max, f[i][i] + b[m] * r[i]);
        ans = ans + Max;
    }
    ans.print();
}