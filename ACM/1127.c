#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[10][10],i=0,j=0,s=0;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                s += a[i][j];
            }
        }
        printf("%d\n", s);
    }
}