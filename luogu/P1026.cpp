/*
 * @Author: iwan
 * @Description:统计单词个数
 * @Date: 2021-07-28 18:11:28
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1026.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int p, k, s;
string str, tmp;
vector<vector<int>> dp(250, vector<int>(10, 0)), word_num(250, vector<int>(250, 0));
vector<string> words(10);
void read() {
    cin >> p >> k;
    for (int i = 0; i < p; i++) {
        cin >> tmp;
        str += tmp;
    }
    cin >> s;
    for (int i = 1; i <= s; i++) {
        cin >> words[i];
    }
}
bool exit(int start, int end) {
    for (int i = 1; i <= s; i++) {
        int pos = str.find(words[i]);
        if (pos == start && pos + words[i].size() <= end) return true;
    }
    return false;
}

void init() {
    for (int j = str.size() - 1; j >= 0; j--) {
        for (int i = str.size() - 1; i >= 0; i--) {
            if (exit(i, j))
                word_num[i][j] = word_num[i + 1][j] + 1;
            else
                word_num[i][j] = word_num[i + 1][j];
        }
    }
}
void work() {
    for (int i = 1; i <= k; i++)
        dp[i][i] = dp[i - 1][i - 1] + word_num[i][i];
    for (int i = 0; i < str.size(); i++)
        dp[i + 1][1] = word_num[1][i + 1];
}
int main() {
    read();
    init();
    work();
    return 0;
}