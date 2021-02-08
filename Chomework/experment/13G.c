#include <stdio.h>
#include <math.h>
int main(){
    int t,n,i;
    while(scanf("%d",&t)!=EOF){
        while(t--){ 
            int flag=0;
            scanf("%d",&n);
            for(i=1;i<=10000;i++){
                if((int)sqrt(i*i*n+1)*(int)sqrt(i*i*n+1)==n*i*i+1){
                    printf("%d\n",i);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("No\n");
        }
    }
    return 0;
}