#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n, a[10000], s, i, j;
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &s);
    if(s>a[n-1]){
        a[n] = s;
    }
    for (i = 0; i < n;i++){
        if(s<a[i]){
            for (j = n; j > i;j--){
                a[j] = a[j - 1];
            }
            a[i] = s;
            break;
        }
    }
    printf("%d", a[0]);
    for (i = 1; i <= n;i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    system("pause");
}