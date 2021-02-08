#include<stdio.h>
int main() {
	int n, m, i, a[20];
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for (i = 0; i < n; i++) {
			if (m == a[i]) {
				n--;
				for (; i < n; i++) {
					a[i] = a[i + 1];
				}
			}
		}
		if (n != 0) {
			for (i = 0; i < n - 1; i++) {
				printf("%d ", a[i]);
			}
			printf("%d\n", a[i]);
		}
	}
	return 0;
}