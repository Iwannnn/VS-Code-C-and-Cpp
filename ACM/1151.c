#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000];
    while(gets(s)){
        int x[1000] = {0}, l, flag = 0,m;
        memset(x, 0, sizeof(x));
        l = strlen(s);
        for (int i = 0; i < l;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                m = s[i] - '0';
                if(flag==0&&x[m]==0){
                    printf("%c", s[i]);
                    flag = 1;
                    x[m]++;
                }
                if (flag==1&&x[m]==0){
                    printf(" %c", s[i]);
                    x[m]++;
                }
            }
        }    
        printf("\n");
    }
}