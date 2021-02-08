#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int T,i=1;
    scanf("%d", &T);
    while (i<=T) {
        int k, temp, j, s = 0, n;
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }
	    for (j = 1; j < n; j++) {
            k = j;
            temp = a[j];
            while (k > 0 && temp < a[k - 1]) {
                a[k] = a[k - 1];
                k--;
                s++;
            }
		    a[k] = temp;
            if ((k == j) || (k > 0 && k < j)) {
                s++;
            }
        }
        printf("%d\n", s);
        for (j = 0; j < n-1;j++) {
            printf("%d ", a[j]);
        }
        printf("%d\n", a[n - 1]);
        i++;
    }
    system("pause");
}