#include <stdio.h>
int judgea(int n,int a){
    int flag = 0,m=5;
    while(m--){
        if(n%10==a){
            flag = 1;
            break;
        }else
            n /= 10;
    }
    return flag;
}
int main(){
    int t;
    while(~scanf("%d", &t)){
    while (t--){
        int a, i;
        scanf("%d", &a);
        long long int suma=0,sumb=0;
        for (i = 1000; i <= 9999;i++){
                if(i%a!=0&&judgea(i,a)==1){
                    suma++;
                    sumb += i;
                }

        }
        printf("%lld %lld\n", suma, sumb);
    }
    }
}