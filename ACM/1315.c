#include <stdio.h>
void bub(int a[],int n){
    int i,j,c=0;
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-1-i;j++)
    		if(a[j+1]<a[j]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j + 1] = temp;
                c++;
            }
    }
    printf("%d\n", c);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    bub(a,n);
}