#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[n][n], i, j;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j <= i;j++){
                a[i][j] = 0;
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j < n-1;j++){
                printf("%d ", a[i][j]);
            }
            printf("%d\n", a[i][n - 1]);
        }
    }
}