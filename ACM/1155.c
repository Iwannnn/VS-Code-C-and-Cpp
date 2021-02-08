#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    while(~scanf("%d", &n)){
        char a[10][10],temp[10];
        gets(temp);
        for (int i = 0; i < n;i++){
            gets(a[i]);
        }
        for (int i = 1; i < n;i++){
            for (int j = n - 1; j >= i;j--){
                if (strcmp(a[j], a[j-1])<0){
                    strcpy(temp, a[j - 1]);
                    strcpy(a[j - 1], a[j]);
                    strcpy(a[j], temp);
                }
            }
        }
        for (int i = 0; i < n;i++){
            printf("%s\n", a[i]);
        }
            printf("\n");
    }
}