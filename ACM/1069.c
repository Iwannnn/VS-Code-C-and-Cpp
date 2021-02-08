#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int j=1,s=1;
        while(j<n)
        {
            s=(s+1)*2;
            j+=1;
        }
    printf("%d\n",s);
    }
    return 0;
}