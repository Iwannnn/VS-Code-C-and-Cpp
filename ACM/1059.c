#include <stdio.h>
int main()
{
	int i,n;
	while(scanf("%d",&n)!=EOF)
	    for(i=1;i<=n;i++){
		    if(i%3==0 && n-i>=3){
			    printf("%d ",i);			
		}
		else if(i%3==0) 
        printf("%d\n", i);
        
	}
	return 0;
}