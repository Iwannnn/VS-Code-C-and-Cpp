#include <stdio.h>
int main (void) {
    int n, m;
    while (scanf("%d%d",&n,&m)!=EOF) {
        int a[n + 1][m + 1], s=1,flag=1;
        for (int i = 1; i <= n;i++) {
            for (int j = 1; j <= m;j++) {
                a[i][j] = s;
                s++;
            }
        }
        for (int i = 1; i <= n;i++) {
            if(flag==1) {
                for (int j = 1; j < m;j++) {
                    printf("%2d " ,a[i][j]);
                }
                printf("%2d\n", a[i][m]);
                flag = 0;
            } else {
                for (int j = m; j >1;j--) {
                    printf("%2d " ,a[i][j]);
                }
                printf("%2d\n", a[i][1]);
                flag = 1;
            }        

        }
    }
}