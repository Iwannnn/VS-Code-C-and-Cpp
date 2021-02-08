#include <stdio.h>
#include <math.h>
int main (void) {
    int m;
    while(~scanf("%d",&m)) {
        int a[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80,m},mi,t;
        mi = 9;
        for (int i = 8; i >=0;i--) {
            if (m<a[i]) {
                t = a[mi];
                a[mi] = a[i];
                a[i] = t;
                mi--;
            }
        }
        for (int i = 0; i < 9; i++) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[9]);
    }
}