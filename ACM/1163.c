#include <math.h>
#include <stdio.h>
int fun(int n);
int main(void){
    int n;
    while(scanf("%d",&n)){
        if(fun(n)==1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
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