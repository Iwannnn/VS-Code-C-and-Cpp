#include <stdio.h>
#include <stdlib.h>
int main() {
    int T,i;
    scanf("%d", &T);
    for (i = 1; i <= T;i++) {
        int n, j=0,k;
        scanf("%d", &n);
        k = n - 1;
        int a[n];
        while(j<n) {
            scanf("%d", &a[j]);
            j++;
        }
        while(k>0) {
            printf("%d ", a[k]);
            k--;
        }
        printf("%d\n", a[0]);
    }
}
