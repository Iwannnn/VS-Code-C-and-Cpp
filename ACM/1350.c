#include <stdint.h>
#include <stdio.h>
int main(){
    int i,j,w,n,a[30500],maxi,t,sum=0;
    scanf("%d%d", &w, &n);
    for (i = 0; i <n;i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1;i++){
        maxi = i;
        for (j = i + 1; j < n;j++)
            if(a[j]>a[maxi])
                maxi = j;
        t = a[i];
        a[i] = a[maxi];
        a[maxi] = t;
    }
    for (i = 0; i < n; i++){
        if (a[i] + a[n - 1] > w && i != n - 1)
            sum++;
        else
            sum++, n--;
    }
    printf("%d\n", sum);
}