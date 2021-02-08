#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t;i++)
    {
        int a[46], k, m;
        scanf("%d", &m);
        a[0] = 0;
        a[1] = 1;
        for (k = 2; k < 46;k++)
        {
            a[k]=a[k-1] + a[k-2];
        }
        printf("%d\n", a[m]);
    }
}