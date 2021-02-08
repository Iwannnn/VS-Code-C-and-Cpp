#include <stdio.h>
#include <math.h>
int main()
{
    float pi,a,b,c,sum,i;
    while(scanf("%f",&a)!=EOF)
    {
        b=1;
        c=1;
        sum=0;
        i=1;
        int flag=0;
        do
        {
            c=1.0/b;
            sum=sum+c;
            i=i+2.0;
            flag++;
            if(flag%2==1)
            b=-1.0*i;
            else
            b=i;
        }
        while(fabs(c)>=a);
        printf("%.4f\n",4.0*sum);
    }
    return 0;
}