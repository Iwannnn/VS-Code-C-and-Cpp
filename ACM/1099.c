#include <stdio.h>
int main() {
    int n;
    while (~scanf("%d", &n)) {
        int a[n],max,min;
        float s=0,ave;
        for (int i = 0; i < n;i++) {
            scanf("%d", &a[i]);
            if(i==0) {
                max = a[i];
                min = a[i];
            }
            if(a[i]>max)
                max = a[i];
            if(a[i]<min)
                min = a[i];
            s = s + a[i];
        }
        s = s - max - min;
        ave = s / (n - 2);
        printf("%.2f\n", ave);
    }
    return 0;
}