#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    char c;
    while(~scanf("%c",&c)){
        int a[10], *p = a,i,j,t;
        for (i = 0; i < 10;i++){
            scanf("%d", p + i);
        }
        for (i = 0; i < 10;i++){
            for (j = 9; j >i;j--){
                if(*(p+j)<*(p+j-1)){
                    t = *(p + j);
                    *(p + j) = *(p + j - 1);
                    *(p + j - 1) = t;
                }
            }
        }
        if(c=='D'){
            printf("%d", *(p + 9));
            for (i = 8; i >= 0;i--)
                printf(" %d", *(p + i));
            printf("\n");
        }else if(c=='A'){
            printf("%d", *(p ));
            for (i = 1; i <= 9;i++)
                printf(" %d", *(p + i));
            printf("\n");
        }
    }
}