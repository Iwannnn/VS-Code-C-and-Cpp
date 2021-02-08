#include <stdio.h>
#include <string.h>
int main(void){
    char a[100];
    int n;
    while(gets(a)){
        n = strlen(a);
        n--;
        if(n<=0)
            return 0;
        for(;n>=0;n--){
            printf("%c",a[n]);
        }
        printf("\n");
    }
    return 0;
}