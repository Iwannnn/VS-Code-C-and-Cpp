#include <stdio.h>
int main()
{
    int m=0, n, i=1;
    scanf("%d",&n);
    while(i<n)
    {
        if (n%i==0)
            m=m+i;
        i+=1;
    }
    if(n==m)
        printf("%d is cloze.\n",n);
    else
        printf("%d is not cloze.\n",n);     
    return 0;
}