#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000];
    while(gets(s)){
        int l = strlen(s);
        for (int i = 0; i < l;i++){
            if(s[i]>='A'&&s[i]<='Z')
                s[i] = 155-s[i];
        }
        printf("%s\n", s);
    }
}