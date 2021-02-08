#include <stdio.h>
#include <math.h>
int fun(int n);
int main(void){
    int n, m;
    while(~scanf("%d%d",&n,&m)){
        int i,flag=1;
        for (i = n; i <= m;i++){
            if(fun(i)&&flag){
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
    int i;
    int flag = 1;
    if(n==1){
        return 0;
    }
    for (i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    return flag;
} 