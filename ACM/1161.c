#include <stdio.h>
int fun(int n);
int main(void){
    int n;
    int s;
    while(~scanf("%d", &n)){
    s = fun(n);
    printf("%d\n", s);
    }
}
int fun(int n){
    int s=1;
    for (int i = 2; i <= n;i++){
        s *= i;
    }
    return s;
}