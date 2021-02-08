#include <stdio.h>
int length(char *s);
int main(int argc,char *argv[]){
    char s[150];
    while(gets(s)!=NULL){
        printf("%d\n", length(s));
    }
}
int length(char *s){
    int t=0;
    while(*s++!='\0')
        t++;
    return t;
}