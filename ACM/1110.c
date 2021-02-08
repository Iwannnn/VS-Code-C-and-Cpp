#include <stdio.h>
int main (void) {
    int n;
    while(~scanf("%d",&n)) {
        int a[n],temp;
        for (int i = 0; i < n;i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j <n-1-i;j++) {
                if(a[j]>a[j+1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }
}