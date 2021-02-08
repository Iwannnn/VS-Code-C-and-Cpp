#include <stdio.h>
#include <string.h>
void copy(char *p1,char *p2,int m);
int main(){
    int m;
    char str1[180],str2[180];
    while(scanf("%d",&m)!=EOF){
        gets(str1);
        if(strlen(str1)>=m){
            copy(str1,str2,m);
            printf("%s\n",str2);
        }
    }
    return 0;
}
void copy(char *p1,char *p2,int m){
    p1=p1+m;
    while(*p1!='\0'){
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
}