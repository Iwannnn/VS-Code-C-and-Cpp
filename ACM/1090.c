#include <stdio.h>
#include <stdlib.h>
int main() {
    int T,i;
    scanf("%d", &T);
    for (i = 1; i <= T;i++) {
        int n, j=0, k=0;
        scanf("%d", &n);
        int a[n];
        while(j<n) {
            scanf("%d", &a[j]);
            j++;
        }
        while(k<n-1) {
            printf("%d ", a[k]);
            k++;
        }
        printf("%d\n", a[n - 1]);
    }
}
