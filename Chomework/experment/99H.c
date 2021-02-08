#include <stdio.h>
#include <math.h>
int sushu(int n){
    int i,flag=1;
    if(n==1)
        flag = 0;
    for (i = 2; i <= sqrt(n);i++)
        if(n%i==0){
            flag = 0;
            break;
        }
    return flag;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int m1, m2,i,a[12345],index=1;
        scanf("%d%d", &m1, &m2);
        for (i = m1; i <= m2;i++)
            if(sushu(i)==1){
                a[index++] = i;
            }
        for (i = 1; i < index - 1;i++)
            printf("%d ", a[i]);
        printf("%d\n", a[index - 1]);
    }
}