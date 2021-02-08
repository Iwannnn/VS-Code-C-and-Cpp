#include<stdio.h>
int main()
{
	int n,i,j,maxk,l,max,a[20];
	while(~scanf("%d",&n))
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n-1;i++) {
			for(j=i+1;j<n;j++) {
				if(a[i]>a[j]) {
					l=a[i];
					a[i]=a[j];
					a[j]=l; 
				}
			}
		}
		l=a[0];
		max=1;
		maxk=1;
		for(i=1;i<n;i++) {
			if(a[i]!=a[i-1]) {
				if(maxk>max) {
					max=maxk;
					l=a[i-1];
				}
				maxk=1;
			}	
			else
				maxk++;
		}
		if(maxk>max) {
			max=maxk;
			l=a[i-1];
		}
		printf("%d\n",l);
	}
	return 0;
}