#include<stdio.h>
#include<string.h>

int main() {
    char n[666], m[666];
    scanf("%s%s",n,m);
    int l1=strlen(n),l2=strlen(m),a[l1],b[l2],c[666],i,j;
    for(i=0,j=l1-1;i<l1;i++,j--)
        a[i]=n[j]-'0';
    for(i=0,j=l2-1;i<l2;i++,j--)
        b[i]=m[j]-'0';
    for(i = 0; i < 666; i++)
        c[i] = 0;
    for(i=0;i<l1;i++)
        for(j = 0;j<l2;j++)
            c[i+j]+=a[i]*b[j];
    for (i=0;i<l1+l2;i++){
        if (c[i]>=10){
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    for (j = 665;j>0;j--)
        if (c[j]!=0)
            break;
    for (i=j;i>=0;i--)
        printf("%d", c[i]);
    printf("\n");
    return 0;
}