#include <stdio.h>
int fun(int a,int b){
    int c;
    c = a % b;
    while(c!=0){
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int main(){
    int m, n;
    while(~scanf("%d%d",&m,&n)){
        int min,max;
        if(m>n)
            min=fun(m, n);
        else
            min=fun(n, m);
        max = m * n / min;
        printf("%d %d\n", min,max);
    }
}