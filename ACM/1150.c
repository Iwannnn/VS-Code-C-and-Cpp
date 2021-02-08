#include <stdio.h>
#include <string.h>
int main(void){
    int k;
    char s[1000];
    while(gets(s)){
        char x[5]={'a','e','i','o','u'},y[5]={'A','E','I','O','U'};
        int j,z;
        for(k = 0; k <= 4; k++){
            z= 0;
            for(j = 0; s[j] != '\0'; j++){
                if (x[k] == s[j] || y[k] == s[j])
                    z++;
            }
            printf("%d\n",z);
        }
        printf("\n");
    }
}