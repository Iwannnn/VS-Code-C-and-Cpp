#include <stdio.h>
#include <string.h>
int main(){
    int n,a[666],sum[666],i,j,k,l=1;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    memset(sum, 0, sizeof(sum));
    a[1] = 1;
    sum[1] = 1;
    if(n==1)
        printf("%d", sum[1]);
    for (i = 2; i <= n;i++){
        for (j = 1; j <= l;j++)
            a[j] *= i;
        for (j = 1; j <= l;j++){
            if(a[j]>=10){
                a[j + 1] += (a[j] / 10);
                a[j] %= 10;
                if(j==l)
                    l++;
            }
        }
        for (k = 1; k <= l;k++)
            sum[k] += a[k];
        for (k = 1; k <= l;k++){
            if(sum[k]>=10){
                sum[k + 1] += (sum[k] / 10);
                sum[k] %= 10;
                if(k==l)
                    l++;
            }
        }
    }
    for (i = l; i >= 1;i--)
        printf("%d", sum[i]);
}