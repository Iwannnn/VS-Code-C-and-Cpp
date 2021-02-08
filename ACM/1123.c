#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int i,j,ky,kx,l,a[n][n],max,min;
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n;i++){
            max = a[i][0];
            kx = 0;
            ky = 0;
            for (j = 1; j < n;j++){
                if (a[i][j]>max){
                    max = a[i][j];
                    kx = j;
                }
            }
            min = a[0][kx];
            for (l = 1; l < n;l++){
                if(a[l][kx]<min){
                    min = a[l][kx];
                    ky = l;
                }
            }
            if(max==min){
                printf("%d %d\n", ky, kx);
                break;
            }    
        }
        if(max!=min){
            printf("NO\n");
        }
    }
}