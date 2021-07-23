/*
 * @Author: iwan
 * @Description:划定分数线
 * @Date: 2021-07-23 16:57:46
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1068.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, m, num = 0, score_line;
vector<int> score(10010), sub(10010), number(10010);
bool cmp(int x, int y) {
    if (score[x] == score[y]) return number[x] < number[y];
    return score[x] > score[y];
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> number[sub[i] = i] >> score[i];
    }
    sort(sub.begin() + 1, sub.begin() + n + 1, cmp);
    score_line = score[sub[int(m * 1.5)]];
    for (int i = 1; i <= n; i++)
        if (score[sub[i]] >= score_line) num++;
    cout << score_line << " " << num << endl;
    for (int i = 1; i <= num; i++)
        cout << number[sub[i]] << " " << score[sub[i]] << endl;
    return 0;
}
