#include <stdio.h>
int main(int argc, char * argv[]){
    int n;
    while (~scanf("%d",&n)){
        int i,sum=0;
        for (i = 1; i <= n;i++){
            int o=i,p=i,q=0;
            while (o != 0){
                q = q * 10 + o % 10;
                o /= 10;
            }
            if(p==q)
                sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}