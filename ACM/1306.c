#include<stdio.h>
int main(void){
    int t,m;
    while(~scanf("%d",&t)){
        while(t--){
            scanf("%d",&m);
            if(m==1)
                printf("1\n");
            if(m==2)
                printf("n\n");
            if(m==3)
                printf("2^n\n");
            if(m==4)
                printf("n^2\n");
            if(m==5)
                printf("nlogn\n");
            if(m==6)
                printf("n^2\n");
            if(m==7)
                printf("n^3\n");
        }
    }
    return 0;
}