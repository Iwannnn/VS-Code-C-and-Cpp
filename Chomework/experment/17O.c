#include <stdio.h>
#include <string.h>
int main(){
    char str[123];
    while(gets(str)!=NULL){
        int l = strlen(str),i;
        for (i = 0; i < l;i++)
            if(str[i]>='A'&&str[i]<='Z')
                str[i] = 'A' + 'Z' - str[i];
        printf("%s\n", str);
    }
}