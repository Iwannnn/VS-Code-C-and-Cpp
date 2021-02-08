#include <stdio.h>
int judge(int n){
    int t=0,m,sum=0,a=n;
    while(n!=0){
        m = n % 10;
        sum += m * m * m * m * m;
        n /= 10;
    }
    if(sum==a)
        t = 1;
    return t;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        int t = judge(n);
        if(t==1){
            printf("Yes\n");
        }else if(t==0){
            printf("No\n");
        }
    }
}