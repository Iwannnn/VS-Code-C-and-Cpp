#include <stdio.h>
int main(void) {
    int n,i;
    while(~scanf("%d",&n)) {
        int a[n],max,maxi=0;
        for (i = 0; i < n;i++) {
            scanf("%d", &a[i]);
        }
        max = a[0];
        for (i = 1; i < n;i++) {
            if(a[i]>max) {
                max = a[i];
                maxi = i;
            }
        }
        a[maxi] = a[n - 1];
        a[n - 1] = max;
        for (i = 0; i < n-1;i++) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n - 1]);
    }
    return 0;
}