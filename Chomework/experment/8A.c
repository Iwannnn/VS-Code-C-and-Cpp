#include <stdio.h>
#include <string.h>
int strcomp(char *s1, char *s2);
int main(){
    char s1[150],s2[150];
    while(~scanf("%s%s",s1,s2)){
        printf("%d\n", strcomp(s1, s2));
    }
    return 0;
}
int strcomp(char *s1, char *s2){
    int t,p;
    while(*s1==*s2&&*s1!='\0'){
        s1++;
        s2++;
    }
    p = *s1 - *s2;
    if(p==0)
        t = 0;
    else if(p>0)
        t=1;
    else
        t = -1;
    return t;
}
