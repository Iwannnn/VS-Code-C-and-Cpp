#include<stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[20], b[20], j = 0, i, m;
        for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for (i = 0; i < n; i++) {
			if (m != a[i]) {
                b[j] = a[i];
                j++;
            }
		}
        if(j==0)
            printf("\n");
        else {
            for (int i = 0; i < j - 1;i++) {
                printf("%d ", b[i]);
            }
            printf("%d\n", b[j - 1]);
        }
    }
	return 0;
}