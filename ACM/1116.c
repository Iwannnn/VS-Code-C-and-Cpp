#include<stdio.h>
int main() {
    int m,n,a[10][10],i,j;
	while(scanf("%d%d",&n,&m)!=EOF) {
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		}
		if((1<n&&n<=10)&&(1<m&&m<=10)) {
		   	for(i=0;i<m;i++) {
				for(j=0;j<n;j++) {
					printf("%d ",a[j][i]);
				if(j==n-1)printf("\n");
				}
			}
		}
	}
	return 0;
}