#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000001];
    while(scanf("%s",s)){
        getchar();
        int a[26]={0}, b[26]={0},i,j=0,l,flag=0;
        l = strlen(s);
        for (i = 0; i<l; i++){
            if(s[i]!='#'){
            a[s[i] - '0'] = 1;
            j++;
            }else{
                break;
            }
        }
        for (i = j; i < l;i++){
            if(s[i]!='#'){
            b[s[i] - '0'] = 1;
            j++;
            }else{
                break;
            }
        }
        for (i = 97; i <=122;i++){
            if(a[i]==0&&b[i]==1){
                flag = 1;
                break;
            }
        }
        if(flag==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
}