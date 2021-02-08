#include <stdio.h>
#include <string.h>
int main(){
    char s[3][150],temp[150];
    while(~scanf("%s%s%s",s[0],s[1],s[2])){
        int i, j;
        for (i = 0; i < 3;i++){
            for (j = 2; j > i;j--){
                if(strcmp(s[j],s[j-1])==-1){
                    strcpy(temp, s[j]);
                    strcpy(s[j], s[j-1]);
                    strcpy(s[j-1], temp);
                }
            }
        }
        for (i = 0; i<3;i++){
            printf("%s\n", s[i]);
        }
    }
}