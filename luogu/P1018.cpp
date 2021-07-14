#include <bits/stdc++.h>
using namespace std;
/*
void helper(int k, int start, string str, vector<int> &nums, int &res) {
    if (k == 0) {
        string tmp_num = str.substr(start, str.size() - start + 1);
        int num = stoi(tmp_num);
        nums.push_back(num);
        int tmp_res = 1;
        for (int i = 0; i < nums.size(); ++i) {
            tmp_res *= nums[i];
        }
        res = res > tmp_res ? tmp_res : res;
        nums.pop_back();
        return;
    }
    for (int i = start; i < str.size(); ++i) {
        string temp = str.substr(start, i - start + 1);
        int num = stoi(temp);
        nums.push_back(num);
        helper(--k, i + 1, str, nums, res);
        ++k;
        nums.pop_back();
    }
}
int main() {
    int n, k, res = INT_MAX;
    string str;
    cin >> n >> k;
    cin >> str;
    vector<int> nums(k, 0);
    helper(k, 0, str, nums, res);
    cout << res;
    system("pause");
    return 0;
}
*/
string s;
long long man, f[41][41] = {{0}}, n, k;
long long cs(int ks, int js) //计算一段的值
{
    long long sum = 0, t = 1;
    for (int i = js; i >= ks; i--) {
        sum = sum + (s[i] - '0') * t, t = t * 10;
    }
    return sum;
}
int main() {
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++) {
        f[0][i] = cs(0, i);
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int h = j; h >= i; h--) {
                f[i][j] = max(f[i][j], f[i - 1][h - 1] * cs(h, j));
            }
        }
    }
    cout << f[k][n - 1];
}