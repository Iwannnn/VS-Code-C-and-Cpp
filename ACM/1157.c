#include <stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int i,n,j,q;
	while(scanf("%s",a)!=EOF)
	{
		j=0;
		n=strlen(a);
		for(i=n-1;i>=0;i--){
			if(a[i]=='*')
				j++;
			else
				break;
		}
		for(q=0;q<=i;q++){
			if(a[q]!='*')
			printf("%c",a[q]);
		}
		for(i=0;i<j;i++)
			printf("*");
		printf("\n");
	}
	return 0;
}