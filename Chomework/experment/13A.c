#include <stdio.h>
#include <stdlib.h>
int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        int k;
        scanf("%d",&k);
        if(k==1){
            printf("1\n");
            continue;
        }
        int n=1,m=1;
        while(m!=0){
            m=m*10+1;
            m=m%k;
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}