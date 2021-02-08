#include <stdio.h>
int main(){
    int n,f[50],i;
    f[1] = 1;
    f[2] = 1;
    f[3] = 2;
    for (i = 4; i <= 30;i++)
        f[i] = f[i - 1] + f[i - 3];
    while (~scanf("%d", &n))
        printf("%d\n", f[n]);
}