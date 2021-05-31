#include <bits/stdc++.h>
using namespace std;

void dpRes(string x, string y, vector<vector<int>> &dp, vector<vector<int>> &res) {
    for (int i = 1; i <= x.size(); ++i) {
        for (int j = 1; j <= y.size(); ++j) {
            if (x[i - 1] == y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                res[i][j] = 1;
            } else {
                if (dp[i - 1][j] >= dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                    res[i][j] = 2;
                } else if (dp[i - 1][j] < dp[i][j - 1]) {
                    dp[i][j] = dp[i][j - 1];
                    res[i][j] = 3;
                }
            }
        }
    }
}

void printWay(string x, string y, vector<vector<int>> res) {
    for (int i = 0; i <= x.size(); ++i) {
        for (int j = 0; j <= y.size(); ++j) {
            if (res[i][j] == 0) {
                cout << "空";
            } else if (res[i][j] == 1) {
                cout << "要";
            } else if (res[i][j] == 2) {
                cout << "下";
            } else if (res[i][j] == 3) {
                cout << "右";
            }
            cout << " ";
        }
        cout << endl;
    }
}

void getRes(int i, int j, string x, string y, vector<vector<int>> res, vector<char> &out) {
    if (i == 0 || j == 0) return;
    // cout << res[i][j] << " " << i << " " << j << endl;
    if (res[i][j] == 1) {
        out.push_back(x[i - 1]);
        getRes(i - 1, j - 1, x, y, res, out);
    } else if (res[i][j] == 2) {
        getRes(i - 1, j, x, y, res, out);
    } else if (res[i][j] == 3) {
        getRes(i, j - 1, x, y, res, out);
    }
}

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
    vector<vector<int>> dp(x.size() + 1, vector<int>(y.size() + 1, 0)), res(x.size() + 1, vector<int>(y.size() + 1, 0));
    vector<char> out;
    dpRes(x, y, dp, res);
    printWay(x, y, res);
    getRes(x_l, y_l, x, y, res, out);
    reverse(out.begin(), out.end());
    for (int i = 0; i < out.size(); i++)
        cout << out[i];
    cout << endl << dp[x_l][y_l] << endl;
    system("pause");
}