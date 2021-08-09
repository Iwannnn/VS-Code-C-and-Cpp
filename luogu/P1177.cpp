/*
 * @Author: iwan
 * @Description:快排
 * @Date: 2021-08-09 21:59:05
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1177.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int n, num[10010];
void quick_sort(int l, int r) {
    // if (l >= r) return;
    // int i = l, j = r;
    // int pivot = num[l];
    // while (i < j) {
    //     while (i < j && num[j] > pivot)
    //         --j;
    //     if (i < j) {
    //         num[i] = num[j];
    //         ++i;
    //     }
    //     while (i < j && num[i] <= pivot)
    //         ++i;
    //     if (i < j) {
    //         num[j] = num[i];
    //         --j;
    //     }
    // }
    // num[i] = pivot;
    // quick_sort(l, i - 1);
    // quick_sort(i + 1, r);
    int mid = num[(l + r) / 2];
    int i = l, j = r;
    while (i <= j) {
        while (num[i] < mid)
            ++i;
        while (num[j] > mid)
            --j;
        if (i <= j) {
            swap(num[i], num[j]);
            i++;
            j--;
        }
    }
    if (l < j) quick_sort(l, j);
    if (i < r) quick_sort(i, r);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    quick_sort(0, n - 1);
    for (int i = 0; i < n - 1; i++)
        cout << num[i] << " ";
    cout << num[n - 1] << endl;
    return 0;
}