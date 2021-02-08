#include<stdio.h>
#include<string.h>
int main(void){
    char s[105];
    int i,k;
    while(gets(s)!=NULL){
        k=strlen(s);
        if(s[0]>='a'&&s[0]<='z')
        s[0]-=32;
        for(i=1;i<k;i++){
            if(s[i]==' '){
                if(s[i+1]>='a'&&s[0]<='z'){
                s[i+1]-=32;
                }
            }
        }
        printf("%s",s);
        printf("\n");
    }
    return 0;
}