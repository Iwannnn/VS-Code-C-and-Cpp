#include <stdio.h>
int main(){
    long long int i, n,num[1010][2]={0};
    scanf("%lld", &n);
    num[1][0] = 8;
    num[1][1] = 1;
    for (i = 2; i <= n;i++){
        num[i][0] = num[i - 1][0] * 9 + num[i - 1][1];
        num[i][1] = num[i - 1][1] * 9 + num[i - 1][0];
    }
    printf("%lld\n", num[n][0] % 12345);
}