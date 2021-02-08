#include <iostream>
using namespace std;
int main(){
    int i,n,a[1233];
    cin >> n;
    for (i = 1; i <= n;i++)
        cin >> a[i];
    for (i = n; i >= 1;i--)
        cout << a[i];
}