#include <stdio.h>
#include <string.h>
int main(void){
    char str[10000], *p = str;
    while(gets(str)!=NULL){
        int big=0, small=0, number=0, other=0, together=0;
        int l = strlen(str);
        for (p = str; p < str + l;p++){
            together++;
            if(*p>='a'&&*p<='z')
                small++;
            else if(*p>='A'&&*p<='Z')
                big++;
            else if(*p>='0'&&*p<='9')
                number++;
            else
                other++;
        }
        printf("%d %d %d %d %d\n", big, small, number, other, together);
    }
}