#include <stdio.h>
#include <math.h>
int main(void){
    int m, n;
    while(~scanf("%d%d",&m,&n)){
        int a[m][n], i, j,max,maxi=0,maxj=0;
        for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        max = a[0][0];
        for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                if(abs(a[i][j])>abs(max)){
                    max = a[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
        }
        printf("%d %d %d\n", maxi+1, maxj+1, max);
    }
}