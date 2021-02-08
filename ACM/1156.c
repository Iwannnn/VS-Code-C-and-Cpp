#include <stdio.h>
#include <string.h>
int main(void){
    char a[1000];
    while(gets(a)!=NULL){
        int l = strlen(a),n=0;
        for (int i = 0; i < l;i++){
            if(a[i]=='*'&&a[i+1]=='*')
                n++;
            else
                break;
        }
        if(n!=0){
            for (int i = n + 1; i < l;i++){
                printf("%c", a[i]);
            }
        }else if(a[0]!='*'){
            for (int i = 0; i < l;i++){
                printf("%c", a[i]);
            }
        }
        else if(a[0]=='*'){
            for (int i = 1; i < l;i++){
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }
}