#include <stdio.h>
#include <string.h>
int dic(char *p, char *q);
int main(int argc,char *argv[]){
    int n;
    while(scanf("%d",&n)){
        char word[n+500][10000],*p,*q;
        int i,j;
        for (i = 0; i < n;i++){
            scanf("%s", word[i]);
        }
        for (i = 0; i < n;i++){
            for (j = n - 1; j > i;j++){
                p = word[j];
                q = word[j - 1];
                dic(p, q);
            }
        }
        for (i = 0; i < n;i++){
            printf("%s", word[i]);
        }
    }
}
int dic(char *p, char *q){
    char temp;
    
}