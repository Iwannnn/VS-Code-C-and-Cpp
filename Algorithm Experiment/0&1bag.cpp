#include <bits/stdc++.h>
using namespace std;
void traceback(vector<int> &weight, int capacity, vector<int> out, vector<vector<int>> &res) {
    if (capacity == 0) {
        res.push_back(out);
        return;
    }
    int min = INT_MAX;
    for (int i = 0; i < weight.size(); ++i) {
        if (weight[i] < min) min = weight[i];
    }
    if (min > capacity) {
        res.push_back(out);
        return;
    }
    for (int i = 0; i < weight.size(); ++i) {
        if (weight[i] <= capacity) {
            out.push_back(weight[i]);
            capacity -= weight[i];
            weight.erase(weight.begin() + i);
            traceback(weight, capacity, out, res);
            weight.insert(weight.begin() + i, out.back());
            out.pop_back();
            capacity += weight[i];
        }
    }
}
int main() {
    vector<int> weight, out;
    vector<vector<int>> res;
    int capacity, w;
    cout << "input capacity:";
    cin >> capacity;
    cout << "input weight:";
    while (cin >> w) {
        weight.push_back(w);
        // 遇到回车符退出
        if ('\n' == cin.get()) {
            break;
        }
    }
    traceback(weight, capacity, out, res);
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
}