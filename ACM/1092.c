#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    while (scanf("%d",&n)!=EOF) {
        int i=0,j=1,k=0,a[n],max;
        while(i<n) {
            scanf("%d", &a[i]);
            i++;
        }
        max = a[0];
        while(j<n) {
            if (a[j]>max) {
                max = a[j];
                k = j;
            }
            j++;
        }
        printf("%d %d\n", max, k);
    }
}