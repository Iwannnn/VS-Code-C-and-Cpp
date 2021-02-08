#include <stdio.h>
int main()
{
    float m=1, n, i=1, j=2, k=0, s=0, sum=0;
    scanf("%f",&n);
    while(m<=n)
    {
        s=j/i;
        sum=sum+s;
        k=j;
        j=i+j;
        i=k;
        m+=1;
    }
    printf("s=%.2f\n",sum);
    return 0;
}