#include <stdio.h>
#include <string.h>
int main(void){
    char a[1000];
    while(gets(a)){
        int l = strlen(a);
        for (int i = 0; i < l;i++){
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
                printf("%c", a[i]);
        }
        printf("\n");
    }
}