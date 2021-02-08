#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000];
    while(gets(s)){
        int l,sum=0;
        l = strlen(s);
        if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
            sum = 1;
        for (int i = 0; i < l - 1;i++){
            if(s[i]==' '&&((s[i+1]>='a'&&s[i+1]<='z')||(s[i+1]>='A'&&s[i+1]<='Z')))
                sum++;
            }
        printf("%d\n", sum);
    }
}