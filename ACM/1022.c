#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    double pi=acos(-1.0);
    scanf("%d",&a);
    printf("%.2f\n%.2f",sin(a*pi/180.0),cos(a*pi/180.0));
    return 0;
}