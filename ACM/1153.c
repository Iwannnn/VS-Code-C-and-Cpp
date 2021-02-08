#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000];
    while(gets(s)){
        int l = strlen(s);
        for (int i = 0; i < l;i++){
            if((s[i]>='a'&&s[i]<='u')||(s[i]>='A'&&s[i]<='U'))
                s[i] = s[i] + 5;
            else if ((s[i]>='v'&&s[i]<='z')||(s[i]>='V'&&s[i]<='Z'))
                s[i] = s[i] -21;
        }
        printf("%s\n", s);
    }
}