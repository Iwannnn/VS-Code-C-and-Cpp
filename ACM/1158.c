#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,flag,l;
    while(scanf("%s",s)!=EOF){
        l=strlen(s);
        flag=-1;
        for(i=l-1;i>=0;i--){
            if(s[i]!='*'){
                flag=i;
                break;
            }
        }
        for(i=0;i<=flag;i++){
            if(s[i]!='*')
                break;
            printf("%c",s[i]);
        }
        for(i=0;i<=flag;i++){
            if(s[i]!='*')
                printf("%c",s[i]);
        }
        for(i=flag+1;i<l;i++){
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
