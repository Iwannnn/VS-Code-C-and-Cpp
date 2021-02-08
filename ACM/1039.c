#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c, delta, max;
    double x1, x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta=b*b-4*a*c;
    if ((a==0 && b==0) || (delta < 0))
        printf("No\n");       
    else if (a==0 && b!=0){
         x1=-(c/b);
         printf("%f\n",x1);
    }
    if (delta>0 && a!=0 && b!=0){
         x1=(-b+sqrt(delta))/(2*a);
         x2=(-b-sqrt(delta))/(2*a);
         if (x1<x2){
             max=x2;
             x2=x1;
             x1=max;
         }     
         printf("%f\n%f\n",x1,x2);
    }
        if (delta==0 && a!=0 && b!=0){
         x1=(-b+sqrt(delta))/(2*a);   
         printf("%f\n",x1);
    }
    return 0;
}