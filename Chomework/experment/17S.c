#include <stdio.h>
int main(){
    int maxi,t,n,i,j,a[123];
    while(~scanf("%d",&n)){
        for (i = 1; i <= n;i++)
            scanf("%d", &a[i]);
        for (i = 1; i < n;i++){
            maxi = i;
            for (j = i + 1; j<= n;j++)
                if(a[j]>a[maxi])
                    maxi = j;
            t = a[i];
            a[i] = a[maxi];
            a[maxi] = t;
        }
        for (i = 1; i <n;i++)
            printf("%d ", a[i]);
        printf("%d\n", a[n]);
    }
}