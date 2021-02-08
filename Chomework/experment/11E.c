#include <stdio.h>
int fact(int n);
int main(){
    int i,t,n;
    scanf("%d", &t);
    for (i = 1; i <= t;i++){
        scanf("%d", &n);
        printf("%d\n",fact(n));
    }
    return 0;
}
int fact(int n){
    if(n==1||n==0)
        return 1;
    else
        return n * fact(n - 1);
}