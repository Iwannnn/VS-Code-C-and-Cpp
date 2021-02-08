#include <stdio.h>
int judge(int n){
    int flag = 0,m;
    while(n!=0){
        m = n % 10;
        if(m==7){
            flag = 1;
            break;
        }
        n /= 10;
    }
    return flag;
}
int main(){
    int t;
    while(~scanf("%d",&t)){
        while(t--){
            int i,n,flag = 0;
            scanf("%d", &n);
            for (i = n; i <= 100;i++){
                if((i%7==0||judge(i)==1)){
                    if(flag==0){
                    printf("%d", i);
                    flag = 1;
                    }else
                        printf(" %d", i);
                }
            }
            printf("\n");
        }
    }
}