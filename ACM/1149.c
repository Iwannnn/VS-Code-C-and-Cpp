#include <stdio.h>
#include <string.h>
int main(void){
    char a[1000];
    while(gets(a)){
        int l = strlen(a);
        char temp;
        for (int i = 0; i < l;i++){
            for (int j = l - 1; j > 0;j--){
                if(a[j]<a[j-1]){
                    temp = a[j - 1];
                    a[j - 1] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%s\n",a);
    }
}