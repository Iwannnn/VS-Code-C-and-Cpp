#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, res = 0;
    cin >> k;
    for (double i = 0; i <= k; i += 1.0 / ++res)
        ;
    cout << res << endl;
    system("pause");
    return 0;
}