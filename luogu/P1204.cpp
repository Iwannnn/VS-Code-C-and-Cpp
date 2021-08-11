/*
 * @Author: iwan
 * @Description:挤牛奶
 * @Date: 2021-08-11 13:04:16
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1204.cpp
 */
#include <bits/stdc++.h>
using namespace std;
struct farmer {
    int begin, end;
};
bool cmp(farmer x, farmer y) {
    return x.begin < y.begin;
}
int main() {
    int n, begin, end, res1 = 0, res2 = 0;
    vector<farmer> farmers(5010);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> farmers[i].begin >> farmers[i].end;
    sort(farmers.begin(), farmers.begin() + n, cmp);
    begin = farmers[0].begin;
    end = farmers[0].end;
    for (int i = 1; i < n; i++) {
        if (farmers[i].begin <= end)
            end = max(farmers[i].end, end);
        else {
            res1 = max(res1, end - begin);
            res2 = max(res2, farmers[i].begin - end);
            begin = farmers[i].begin;
            end = farmers[i].end;
        }
    }
    res1 = max(res1, end - begin);
    cout << res1 << " " << res2;
    return 0;
}