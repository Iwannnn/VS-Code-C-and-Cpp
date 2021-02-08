#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char a[1000],b[1000];
    int sum,i,j,k,l;
    while(~scanf("%d",&t)){
        getchar();
        while(t--){
            l=0;
            scanf("%s",a);
            i=strlen(a)-1;
            while(i>=0){
                sum=0;k=1;
                for(j=1;j<=4;j++){
                    if(i<0)
                        break;
                    sum+=(a[i--]-'0')*k;
                    k*=2;
                }
                if(sum>=10)
                    b[l++]=sum-10+'A';
                else 
                    b[l++]=sum+'0';
            }
            for(i=l-1;i>=0;i--)
                printf("%c",b[i]);
            printf("\n");
        }
    }
    return 0;
}