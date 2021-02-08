#include <stdio.h>
int main(){
    int t,m,n;
    scanf("%d", &t);
    while(t--){
        int i,j,a[123][123]={0},max,min,kx,ky,k,flag=0;
        scanf("%d%d",&m,&n);
        for (i = 1; i <=m;i++)
            for (j = 1; j <=n;j++)
                scanf("%d", &a[i][j]);
        for (i = 1; i <=m;i++){
            kx = 1;
            ky = 1;
            min = a[i][1];
            for (j = 2; j <=n;j++)
                if(a[i][j]<min){
                    min = a[i][j];
                    kx = j;
                }
            max = a[1][kx];
            for (k = 2; k <=m;k++)
                if(a[k][kx]>max){
                    max = a[k][kx];
                    ky = k;
                }
            if(max==min){
                printf("A[%d][%d]\n", ky, kx);
                flag = 1;
            }
        }
        if(flag==0)
            printf("NO.\n");
        printf("\n");
    }
}