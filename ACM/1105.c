#include <stdio.h>
int main() {
    int n;
    while (~scanf("%d", &n)) {
        int i,a[n],first;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        first = a[0];
        for (i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = first;
        for (i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n - 1]);
    }
    return 0;
}      