#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c, d;
    double y1, y2, t, ans;
    cin >> a >> b >> c >> d;
    for (double i = -100; i <= 100; i += 0.001) {
        t = i + 0.001;
        y1 = a * i * i * i + b * i * i + c * i + d;
        y2 = a * t * t * t + b * t * t + c * t + d;
        if ((y1 >= 0 && y2 <= 0) || (y1 <= 0 && y2 >= 0)) {
            ans = (i + t) / 2;
            cout << fixed << setprecision(2) << ans << " ";
        }
    }
    system("pause");
}