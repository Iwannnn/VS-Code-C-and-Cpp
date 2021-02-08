#include <stdio.h>
int main(){
    int i, x, y, z;
    long long int a[101]={0},b[101]={0};
    scanf("%d%d%d", &x, &y, &z);
    for(i=1;i<=x;i++){
        a[i]=1;
        b[i]=0;
    }
    for (i = x + 1; i <= z+1;i++){
        b[i] = y * a[i - x];
        a[i] = a[i - 1] + b[i - 2];
    }
    printf("%lld", a[z + 1]);
}