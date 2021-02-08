#include <stdio.h>
int main() {
    int n;
    while (~scanf("%d", &n)) {
        int a[n + 1], i, m, k;
        for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d%d", &m,&k);
        for (i = n; i > 0; i--)
        {
            if(a[i-1]>m) {
                a[i] = a[i - 1];
            } else {
                a[i] = m;
                break;
            }
        }
        if(i==0) {
            a[0] = m;
        }
        for (i = 0; i < n;i++)
            printf("%d ", a[i]);
        printf("%d\n", a[n]);
        if(k>=0&&k<=n)
            printf("%d\n", a[k]);
    }
	return 0;
}