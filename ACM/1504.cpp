#include <bits/stdc++.h>
using namespace std;
int main(){
    int now=1, n;
    int a[1234];
    stack<int> road;
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n;i++){
        while(now<=a[i]){
            road.push(now);
            now++;
        }
        if(a[i]==road.top()){
            road.pop();
        }else{
            cout << "NO" << endl;
            system("pause");
            return 0;
        }
    }
    cout << "YES" << endl;
    system("pause");
    return 0;
}