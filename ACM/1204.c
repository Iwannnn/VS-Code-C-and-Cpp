#include <stdio.h>
#include <string.h>
int main (int argc,char *argv[]){
    char num[100],p;
    int t[10];
    int i=1,j=0,all=0,q,r;
    scanf("%s", num);
    p = num[12];
    if(p-'0'>=0&&p-'0'<=9){
        r = p - '0';
    }else{
        r = 10;
    }
    while(i<=9){
        t[i] = num[j] - '0';
        if(t[i]>=0&&t[i]<=9){
            t[i] *= i;
            i++;
        }
        j++;
    }
    for (i = 1; i <= 9;i++)
        all += t[i];
    q = all % 11;
    if(r==q)
        printf("Right\n");
    else{
        if(q==10)
            r = 'X';
        else
            r = '0' + q;
        for (i = 0; i < 12;i++)
            printf("%c", num[i]);
        printf("%c\n", r);
    }
    return 0;
}