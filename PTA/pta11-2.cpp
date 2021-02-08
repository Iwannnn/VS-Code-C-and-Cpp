#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, r,a[666];
    cin >> n >> r;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    if(r+r>=n){
        for (int i = 0; i < n - 1;i++)
            cout << a[i] << " ";
        cout << a[n - 1];
    }else{
        sort(a + r, a + n - r);
        for (int i = 0; i < n - 1;i++)
            cout << a[i] << " ";
        cout << a[n - 1];
    }
    system("pause");
}