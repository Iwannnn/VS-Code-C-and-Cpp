#include <stdio.h>
#include <string.h>
int main(void){
    int n,a[100][100];
    while(~scanf("%d",&n)){
        int i, j, m,s=1;
        memset(a, 0, sizeof(a));
        for (i = 0; i < n;i++){
            for (m = i; m >= 0;m--){
                a[m][i-m] = s;
                s++;
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j < n - i - 1; j++){
                printf("%d ", a[i][j]);
            }
            printf("%d\n", a[i][n - i - 1]);
        }
    }
}