#include <stdio.h>
int main (void) {
    int n;
    while (~scanf("%d",&n)) {
        int i = 0, a[n], sum = 0, temp, j, max;
        while(i<n) {
            scanf("%d", &a[i]);
            sum = sum + a[i];
            if(i==0) {
                max = a[i];
            }
            if (i > 0 && a[i] > max) {
                max = a[i];
            }
            i++;
        }
        for (i = 1; i < n;i++) {
            j = i;
            temp = a[i];
            while (j > 0 && temp > a[j - 1]) {
                a[j] = a[j-1];
                j--;
            }
            a[j] = temp;
        }
        printf("%d %d ", sum, max);
        for (i = 0; i < n-1;i++) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n - 1]);
    }
}