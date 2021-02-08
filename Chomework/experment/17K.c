#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d",&n)){
        if(n>=0&&n<=50) printf("0\n");
        else if(n>=51&&n<=70) printf("1\n");
        else if(n>=71&&n<=90) printf("2\n");
        else if(n>=91&&n<=110) printf("3\n");
        else if(n>=111&&n<=130) printf("4\n");
        else if(n>=131) printf("5\n");
    }
}