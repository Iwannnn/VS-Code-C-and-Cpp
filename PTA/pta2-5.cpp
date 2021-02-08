#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
bool judge(int n){
    int t=1,i;
    if(n==1)
        t = 0;
    if(n==2)
        t = 1;
    for (i = 2; i <= sqrt(n);i++){
        if(n%i==0)
            t = 0;
    }
    if(t==0)
        return false;
    else 
        return true;
}
int main(){
    int x, y, i, j;
    cin >> x >> y;
    for (i = x; i <= y;i+=2){
        for (j = 2; j <= x/2;j++){
            if(judge(j)==true && judge(i-j)==true)
                cout << i << "=" << j << "+" << i - j << endl;
        }
    }
}