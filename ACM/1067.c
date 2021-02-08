#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i=1,j=1,s=1,sum=0;
        while(i<=n)
        {
            while(j<=i)
            {
                s=s*j;
                j+=1;
            }
        sum=sum+s;
        i+=1;    
        }
        printf("%d\n",sum);  
    }
    return 0;
}