#include <bits/stdc++.h>
using namespace std;

vector<int> nums(100000, 0);

int n;
int direct(int num) {
    for (int i = 0; i < n; ++i) {
        if (nums[i] == num) return i;
    }
    return -1;
}

int recursion(int l, int r, int num) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (nums[mid] == num)
        return mid;
    else if (nums[mid] < num)
        return recursion(mid + 1, r, num);
    else if (nums[mid] > num)
        return recursion(l, mid - 1, num);
    return -1;
}

int iteration(int l, int r, int num) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == num) {
            return mid;
        } else if (nums[mid] < num) {
            l = mid + 1;
        } else if (nums[mid] > num) {
            r = mid - 1;
        }
    }
    return -1;
}
int main() {
    int num;
    cout << "input num size" << endl;
    cin >> n;
    cout << "intput nums" << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums[i] = num;
    }
    cout << "intpit search num" << endl;
    cin >> num;
    cout << "direct:" << direct(num) << endl;
    cout << "recursion" << recursion(0, n, num) << endl;
    cout << "iteration" << iteration(0, n, num) << endl;
    system("pause");
    return 0;
}