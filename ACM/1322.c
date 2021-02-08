#include <stdio.h>
#include <string.h>
int main(){
    int n,i,j,jw,k=1,tk;
    scanf("%d", &n);
    int a[10000];
    for (i = 1; i < 666;i++)
        a[i] = 0;
    a[1] = 1;
    for(i = 1; i<=n;i++){
        jw = 0;
        tk = k;
        for (j = 1; j <= k;j++){
            a[j] = a[j] * i + jw;
            jw = a[j] / 10;
            a[j] %= 10;
        }
        while(jw>0){
            k++;
            a[k] += jw;
            jw = a[k] / 10;
            a[k]%=10;
        }
    }
    for (i = k; i >= 1;i--)
        printf("%d", a[i]);
    printf("\n");
    return 0;
}