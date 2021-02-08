#include <stdio.h>
int main(){
    int i, n;
    double usd = 100.00,change[150];
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
        scanf("%lf", &change[i]);
    for (i = 1; i < n;i++)
        if(change[i]>change[i+1])
            usd *= change[i] / change[i + 1];
    printf("%.2f", usd);
}