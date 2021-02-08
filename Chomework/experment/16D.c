#include <stdio.h>
#include <math.h>
int judge(int n){
    int i,t=1;
    for (i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            t = 0;
            break;
        }
    }
    return t;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        if(judge(n)==1)
            printf("Prime\n");
        else
            printf("No\n");
    }
}