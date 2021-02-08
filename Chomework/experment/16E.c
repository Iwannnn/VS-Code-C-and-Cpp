#include <stdio.h>
#include <string.h>
int main(){
    char s[150];
    while(~scanf("%s",s)){
        char max;
        int i,l=strlen(s),maxi=0, num[50] = {0};
        for (i = 0; i < l;i++)
            num[s[i] - 'a' + 1]++;
        for (i=1;i<l;i++)
        maxi=num[maxi]<num[i]?i:maxi;
        max = 'a' + maxi - 1;
        printf("%c\n", max);
    }
}