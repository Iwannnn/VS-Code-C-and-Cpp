#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int fun(int m, int n);
int main(void){
    long long int n, i, j, k, stu[10][500], flag[10][500], index = 1,t=0,lucky[500],temp;
    char c;
    memset(stu, 0, sizeof(stu));
    scanf("%lld", &n);
    getchar();
    while((c=getchar())!='\n'){
        if(isdigit(c)){
            ungetc(c,stdin);
            scanf("%lld",&stu[0][index]);
            flag[0][index++] = 1;
        }
    }
    for (i = 1; i <= n;i++){
        for (j = 1; j < index;j++){
            if(flag[0][j]==1)
                stu[i][j] = fun(stu[0][j], i + 1);   
        }
        for (j = 1; j < index; j++){
            if(i==1){
                for (k = 1; k < index; k++){
                    if (stu[i][j] == stu[0][k])
                        flag[0][k] = 0;
                }
            }else{
                if(flag[i-1][j]==1){
                    for (k = 1; k < index; k++){
                        if (stu[i][j] == stu[0][k] && flag[0][k]!=0)
                            flag[0][k] = 0;
                    }
                }
            }
        }
    }
    for (i = 1; i < index;i++){
        if (flag[0][i]==1){
            lucky[t] = stu[0][i];
            t++;
        }
    }
    for (i = 0; i < t;i++){
        for (j = t - 1; j >= i;j--){
            if(lucky[j]<lucky[j-1]){
                temp=lucky[j];
                lucky[j] = lucky[j - 1];
                lucky[j - 1] = temp;
            }
        }
    }
    for (i = 0; i < t-1;i++)
        printf("%lld ", lucky[i]);
    printf("%lld\n", lucky[t - 1]);
}
int fun(int m, int n){
    int p, s = 0;
    while(m>0){
        p = m % 10;
        m /= 10;
        int temp=1;
        for (int i = 1; i <= n;i++){
            temp *= p;
        }
        s += temp;
    }
    return s;
}