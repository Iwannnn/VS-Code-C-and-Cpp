#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a<=6||b<=2)
        printf("yes\n");
    else if (a<=20&&b<5)
        printf("yes\n");
    else 
	    printf("no\n");    
}
