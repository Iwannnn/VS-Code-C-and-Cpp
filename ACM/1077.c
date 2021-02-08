#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a,b,c,p,s;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        p = (a + b + c) / 2.0;
        s = sqrt(p * (p - a)*(p - b)*(p - c));
        printf("%.2lf\n", s);
    }
    return 0;
}