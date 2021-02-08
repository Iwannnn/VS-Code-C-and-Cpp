#include <stdio.h>
#include <string.h>
int cmp(char a[30], char b[30]){
    char ab[60], ba[60];
    strcpy(ab, a);
    strcat(ab, b);
    strcpy(ba, b);
    strcat(ba, a);
    return strcmp(ab, ba);
}
int main(){
    int i,j,k,n;
    char num[30][30],temp[30];
    scanf("%d", &n);
    for (i = 0; i < n;i++)
        scanf("%s", num[i]);
    for (i = 0; i < n-1;i++){
        k = i;
        for (j = i+1; j < n;j++)
            if(cmp(num[j],num[k])>0)
                k = j;
        if(i!=k){
            strcpy(temp, num[i]);
            strcpy(num[i], num[k]);
            strcpy(num[k], temp);
        }
    }
    for (i = 0; i < n;i++)
        printf("%s", num[i]);
    printf("\n");
    return 0;
}