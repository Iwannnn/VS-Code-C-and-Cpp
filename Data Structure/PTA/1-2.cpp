#include <bits/stdc++.h>
using namespace std;
int main() {
    int all_a[2500] = {0}, *index_a = &all_a[1250], all_b[2500] = {0}, *index_b = &all_b[1250], index, k;
    int plus[2500] = {0}, mult[5000] = {0}, *plus_ans = &plus[1250], *mult_ans = &mult[2500], plus_flag = 0, mult_flag = 0;
    int an, bn, temp;
    cin >> an;
    temp = an;
    while (temp--) {
        cin >> k >> index;
        index_a[index] = k;
    }
    cin >> bn;
    temp = bn;
    while (temp--) {
        cin >> k >> index;
        index_b[index] = k;
    }
    for (int i = -1000; i <= 1000; i++) {
        for (int j = -1000; j <= 1000; j++) {
            mult_ans[i + j] += index_a[i] * index_b[j];
        }
    }
    for (int i = -1000; i <= 1000; i++) {
        plus_ans[i] = index_a[i] + index_b[i];
    }
    for (int i = 2000; i >= -2000; i--) {
        if (mult_ans[i] != 0 && mult_flag == 0) {
            cout << mult_ans[i] << " " << i;
            mult_flag = 1;
        } else if (mult_ans[i] != 0) {
            cout << " " << mult_ans[i] << " " << i;
        }
    }
    if (mult_flag == 0) {
        cout << "0 0";
    }
    cout << endl;
    for (int i = 1000; i >= -1000; i--) {
        if (plus_ans[i] != 0 && plus_flag == 0) {
            cout << plus_ans[i] << " " << i;
            plus_flag = 1;
        } else if (plus_ans[i] != 0) {
            cout << " " << plus_ans[i] << " " << i;
        }
    }
    if (plus_flag == 0) {
        cout << "0 0";
    }
    cout << endl;
    system("pause");
    return 0;
}