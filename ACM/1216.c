#include <stdio.h>
#include <string.h>
int main(int argc,char **argv){
    char n[100];
    int i,l,flag=1,t=0;
    scanf("%s", n);
    l = strlen(n);
    if(n[0]=='-'){
        printf("-");
        t = 1;
    }
    for (i = l-1; i >= t;i--){
        if(flag==1){
            if(n[i]=='0')
                continue;
            else{
                printf("%c", n[i]);
                flag = 0;
            }    
        }else{
            printf("%c", n[i]);
        }
    }
    return 0;
}