#include <stdio.h>
int sn(int n){
    int i, sum=0;
    for (i = 1; i <= n;i++)
        sum += i;
    return sum;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,sum=1,i;
        scanf("%d", &n);
        for (i = 2; i <= n;i++)
            sum += i * sn(i);
        printf("%d\n", sum);
    }
}