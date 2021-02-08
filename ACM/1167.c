#include <stdio.h>
int fun(int n);
int main(void){
    int n, m;
    while(~scanf("%d%d",&n,&m)){
        int flag = 1;
        for (int i = n; i <= m;i++){
            if(flag&&fun(i)){
                printf("%d", i);
                flag = 0;
            }else if(fun(i)){
                printf(" %d", i);
            }
        }
        printf("\n");
    }
}
int fun(int n){
    int s = 0;
    for (int i = 1; i < n;i++){
        if(n%i==0)
            s += i;
    }
    if(s==n){
        return 1;
    }else{
        return 0;
    }
}