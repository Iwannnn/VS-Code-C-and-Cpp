#include <stdio.h>
int main(){
    int a[12306], n, i, sum = 0, ave,time=0;
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
        scanf("%d", &a[i]),sum += a[i];
    ave = sum / n;
    for (i = 1; i <= n;i++) a[i] -= ave;
    for (i = 1; i <= n;i++) 
        if(a[i]!=0){
            a[i + 1] += a[i];
            time++;
        }
    printf("%d\n", time);
}