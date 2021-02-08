#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[n][n], i, j,s=0;
        float ave,k=0;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0, j = 0; j < n; j++){
            s = s + a[i][j];
            k++;
        }
        for (i = 1, j = n-1; i < n; i++){
            s = s + a[i][j];
            k++;
        }
        for (i = n-1, j = n-2; j >=0; j--){
            s = s + a[i][j];
            k++;
        }
        for (i = n-2, j = 0; i >0; i--){
            s = s + a[i][j];
            k++;
        }
        ave = s / k;
        printf("%.2f\n", ave);
    }
}