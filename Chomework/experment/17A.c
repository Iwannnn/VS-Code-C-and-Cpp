#include <stdio.h>
int main(){
    int big, small;
    while(~scanf("%d%d",&big,&small)){
        int i, j,mid;
        mid = (big - small) / 2;
        for (i = 1; i <= big;i++){
            for (j = 1; j <= big;j++){
                if(i>mid&&i<=big-mid&&j>mid&&j<=big-mid)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
}