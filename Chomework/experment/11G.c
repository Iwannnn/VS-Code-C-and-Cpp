#include <stdio.h>
int fun(int n){
    int a;
    if(n==1)a = 2;
    else a = fun(n - 1) + n;
    return a;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        printf("%d\n",fun(n));
    }
}