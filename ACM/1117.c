#include <stdio.h>
int main (void) {
    int n, m;
    while (scanf("%d%d",&n,&m)!=EOF) {
        int a[n + 1][m + 1], s=1;
        for (int i = 1; i <= n;i++) {
            for (int j = 1; j <= m;j++) {
                a[i][j] = s;
                s++;
            }
        }
        for (int i = 1; i <= n;i++) {
            for (int j = 1; j < m;j++) {
                printf("%d " ,a[i][j]);
            }
            printf("%d\n", a[i][m]);
        }
    }
}