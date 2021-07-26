/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-26 15:24:05
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1093.cpp
 */
#include <bits/stdc++.h>
using namespace std;
struct stu {
    int num, c, m, e, sum;
};
bool cmp(stu a, stu b) {
    if (a.sum == b.sum) {
        if (a.c == b.c) {
            return a.num < b.num;
        }
        return a.c > b.c;
    }
    return a.sum > b.sum;
}
int main() {
    int n;
    vector<stu> student(320);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        student[i].num = i;
        cin >> student[i].c >> student[i].m >> student[i].e;
        student[i].sum = student[i].c + student[i].m + student[i].e;
    }
    sort(student.begin() + 1, student.begin() + 1 + n, cmp);
    for (int i = 1; i <= 5; i++)
        cout << student[i].num << ' ' << student[i].sum << endl;
    return 0;
}