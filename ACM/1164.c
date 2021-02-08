#include <stdio.h>
#include <math.h>
int fun(int n);
int main(void){
    int x, y;
    while(~scanf("%d%d",&x,&y)){
        int i,k=0,m=y-x+1,t;
        if(x==0&&y==0){
            break;
        }
        for (i = x; i <= y;i++){
            t = i * i + i + 41;
            if(fun(t)==1){
                k++;
            }
        }
        if(k==m){
            printf("Ok\n");
        }else{
            printf("Sorry\n");
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