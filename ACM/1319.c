#include <stdio.h>
#include <math.h>
struct you{
    int x, y;
};
int main(){
    int sum=0,k,n,i,j;
    scanf("%d", &n);
    struct you a[n],temp;
    for (i = 0; i < n;i++)
        scanf("%d%d", &a[i].x, &a[i].y);
    for (i = 0; i < n;i++){
        for (j = n-1; j >i;j--){
            if(a[j].y<a[j-1].y){
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    if(n%2==0){
        k = a[n / 2-1].y;
    }else{
        k = a[n / 2].y;
    }
    for (i = 0; i < n;i++)
        sum+=abs(a[i].y-k);
    printf("%d\n", sum);
}