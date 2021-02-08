#include <stdio.h>
int xian(int n,int p){
    int a;
    if(n==p)
        a = 2*n;
    else
        a=xian(n-1, p) + n;
    return a;
}
int main(){
    int p, n,sum=0;
    scanf("%d%d", &n, &p);
    sum = xian(n, p);
    printf("%d\n", sum);
}