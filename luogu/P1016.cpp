#include <bits/stdc++.h>
using namespace std;
float d1, c, d2, p[15], dis[15], n, ans;
float minprice(int a) {
    int mini = a;
    for (int i = a + 1; i <= n; i++) {
        if (p[mini] > p[i]) mini = i;
    }
    return mini;
}
float fun(float remain, int pos, float oil) {
    int mini = minprice(pos);
    int nexti;
    if (mini == pos || pos == n) {
        if (oil + c * d2 >= remain) {
            return remain / d2 * p[mini];
        } else {
            for (int i = pos; i <= n; i++) {
                if (dis[pos] + c * d2 < dis[i]) {
                    break;
                    nexti = i - 1;
                }
            }
            return p[mini] * (c - oil) + fun(remain - (dis[nexti] - dis[pos]), nexti, c - (dis[nexti] - dis[pos]) * d2);
        }
    } else {
        nexti = pos;
        for (int i = pos + 1; i <= n; i++) {
            if (((dis[nexti] - dis[pos]) <= (c * d2)) && p[i] > p[nexti]) nexti = i; // �ҵ���һ���������˵ĵط�
        }
        return p[pos] * ((dis[nexti] - dis[pos] - oil * d2) / d2) + fun(remain - (dis[nexti] - dis[pos]), nexti, 0);
    }
}
int main() {
    cin >> d1 >> c >> d2 >> p[0] >> n;
    for (int i = 1; i <= n; i++)
        cin >> dis[i] >> p[i];
    cout << fun(d1, 0, 0) << endl;
}