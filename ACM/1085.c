#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,n,a[5]={6,28,496,8128,33550336};
    while(~scanf("%d%d",&m,&n)&&m+n){
        int i = 0,j=0,b[6];
        for (i = 0;i<5;i++){
            if(a[i]>=m&&a[i]<=n){
                j = j + 1;
                b[j] = a[i];
            }
        }
        if(j==0){
            printf("No\n");
        }else{
            for (i = 1; i <=j ; i++){
                if(i==j)
                    printf("%d\n", b[i]);
                else
                    printf("%d ", b[i]);
            }
        }
    }
    return 0;
}