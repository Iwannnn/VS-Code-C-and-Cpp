#include <stdio.h>
int main(void) {
    int n,i,j;
    while(~scanf("%d",&n)) {
        int a[101],s=0;
        for (i = 0; i <= 100;i++){
            a[i] = 0;
        }
            for (i = 1; i <= n; i++)
            {
                for (j = i; j <= n; j = j + i)
                {
                    a[j] = (!a[j]);
                }
            }
        for (i = 1; i <= n; i++)
        {
            if (a[i]==1)
                s++;
        }
        printf("%d\n", s);
    }
}