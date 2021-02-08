#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[n][n], b[n][n], i, j, k = 0;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                if(a[i][j]==b[i][j]){
                    k = k + 1;
                }
            }
        }
        if(k==n*n)
            printf("Yes\n");
        else
            printf("No\n");
    }
}