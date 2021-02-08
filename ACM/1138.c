#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    while(gets(s)!=NULL){
        int l,i,j=0,max[101]={0};
        l=strlen(s);
        for(i=1;i<l;i++){
            if(s[i]>s[max[j]]){
                memset(max,0,sizeof(max));
                j = 0;
                max[j]=i;
            }else if(s[i]==s[max[j]]){
                j++;
                max[j] = i;
            }
        }
        j = 0;
        for (i = 0; i < l; i++){
            printf("%c", s[i]);
            if(max[j]==i){
                printf("(max)");
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}