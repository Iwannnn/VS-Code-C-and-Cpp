#include <stdio.h>
int main(){
    int n,i,j,k;
    while(~scanf("%d",&n)){
        int t=0;
        for (i = 0; i <= n;i++)
            for (j = 0; j <= n;j++)
                for (k = 0; k <= n;k+=2)
                    if((4*i+3*j+k/2==n)&&i+j+k==n){
                        t = 1;
                        printf("%d %d %d\n", i, j, k);
                        break;
                    }
        if(t==0)
            printf("no result!\n");
    }
    return 0;
}