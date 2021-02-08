#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    int n,k;
    scanf("%d", &n);
    getchar();
    while(n--){
        char s[101],x[5]={'a','e','i','o','u'};
        int j,z;
        gets(s);
        for(k = 0; k <= 4; k++){
            z= 0;
            for(j = 0; s[j] != '\0'; j++)
            {
                if(x[k] == s[j])
                z++;
            }
            printf("%c:%d\n", x[k], z);
        }
        printf("\n");
    }
}