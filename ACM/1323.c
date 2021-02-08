#include <stdio.h>
int main(){
    int m,n,x[21];
    scanf("%d%d", &m, &n);
    printf("%d/%d=%d.", m, n, m / n);
    for (int i = 1; i <= 20;i++){
        m %= n;
        m *= 10;
        x[i] = m / n;
    }
    int i = 20;
    while(x[i]==0&&i>1)
        i--;
    for (int j = 1; j <= i;j++)
        printf("%d", x[j]);
    return 0;
}