#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    char str[101];
    while(gets(str)!=NULL){
        int i,k=0,n;
        char str1[101];
        n = strlen(str);
        for (i = n - 1; i >= 0;i--){
            str1[n - 1 - i] = str[i];
        }
        for (i = 0; i < n;i++){
            if(str[i]==str1[i])
                k++;
        }
        if(k==n)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
