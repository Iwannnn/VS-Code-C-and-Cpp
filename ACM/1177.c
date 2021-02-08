#include <stdio.h>
#include <string.h>
int main(void){
    int n,i,j;
    scanf("%d", &n);
    char op, sa[500], sb[500];
    for(j=1;j<=n;j++){
        int a[26] = {0}, b[26] = {0};
        scanf("%s %c %s", sa,&op,sb);
        getchar();
        for (i = 0; i < strlen(sa); i++){
            a[sa[i] - 'a'] = 1;
        }
        for (i = 0; i < strlen(sb); i++){
            b[sb[i] - 'a'] = 1;
        }
        if (op == '+'){
            for (i = 0; i < 26; i++){
                if(a[i]==1||b[i]==1)
                    printf("%c",i+'a');
            }    
        }
        if (op == '-'){
            for (i = 0; i < 26; i++){
                if (a[i] == 1 && b[i] == 0)
                    printf("%c",i+'a');;
            }
        }
        if (op == '*'){
            for (i = 0; i < 26; i++){
                if (a[i] == b[i] && a[i] == 1)
                    printf("%c",i+'a');
            }
        }
        printf("\n");
    }
}