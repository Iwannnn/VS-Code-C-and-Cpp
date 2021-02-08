#include <stdio.h>
int fun(int n);
int main(void){
    int n, m;
    while(~scanf("%d%d",&n,&m)){
        int s;
        s = fun(n) / (fun(m) * fun(n - m));
        printf("%d\n", s);
    }
}
int fun(int n){
    int s=1;
    for (int i = 1; i <= n;i++){
        s *= i;
    }
    return s;
}