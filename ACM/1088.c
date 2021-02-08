#include <stdio.h>
int main() {
	int T,n;
	scanf("%d", &T);
	while(scanf("%d",&n)!=T) {
		int i,a[n];
		for (i = 0; i < n;i++) {
			scanf("%d", &a[n]);
		}
		for (i = 0; i < n;i++) {
			if (i!=n-1)
				printf("%d ", a[i]);
			else
				printf("%d\n", a[i]);
		}		
	}
}