#include <bits/stdc++.h>
using namespace std;
int main() {
    string x, y;
    cout << "input first string:";
    cin >> x;
    cout << "input second string:";
    cin >> y;
    int x_l = x.length(), y_l = y.length();
    if (x_l < y_l) {
        swap(x, y);
        swap(x_l, y_l);
    }
    vector<vector<int>> dp(x_l + 1, vector<int>(y_l + 1, 0)), pic(x_l + 1, vector<int>(y_l + 1, 0));
    for (int i = 1; i <= x_l; ++i) {
        for (int j = 1; j <= y_l; ++j) {
            if (x[i - 1] == y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                pic[i][j] = 1;
            } else {
                // dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

                if (dp[i - 1][j] >= dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                    pic[i][j] = 2;
                } else if (dp[i - 1][j] < dp[i][j - 1]) {
                    dp[i][j] = dp[i][j - 1];
                    pic[i][j] = 3;
                }
            }
            // else if (dp[i - 1][j] > dp[i][j - 1]) {
            // dp[i][j] = dp[i - 1][j];
            // pic[i][j] = 2;
            // }
            // else if (dp[i - 1][j] < dp[i][j - 1]) {
            // dp[i][j] = dp[i][j - 1];
            // pic[i][j] = 3;
            // }
        }
    }
    for (int i = 0; i <= x_l; ++i) {
        for (int j = 0; j <= y_l; ++j) {
            if (pic[i][j] == 0) {
                cout << "空";
            } else if (pic[i][j] == 1) {
                cout << "要";
            } else if (pic[i][j] == 2) {
                cout << "下";
            } else if (pic[i][j] == 3) {
                cout << "右";
            }
            cout << " ";
        }
        cout << endl;
    }
    int starti = 1, startj = 1;
    int i = 1, j = 1;
    while (i <= x_l && j <= y_l) {
        if (pic[i][j] == 1) {
            cout << x[i - 1];
            ++i;
            ++j;
        } else if (pic[i][j] == 2) {
            ++i;
        } else if (pic[i][j] == 3) {
            ++j;
        } else {
            break;
        }
        // {
        //     ++starti;
        //     i = starti;
        //     j = startj;
        // }
    }
    cout << dp[x_l][y_l];
    system("pause");
}