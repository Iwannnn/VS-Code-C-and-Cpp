#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float a,b,c,average;
    scanf("%d\n",&n);
    scanf("%f %f %f",&a,&b,&c);
    average=(a+b+c)/n;
    printf("%.2f\n",average);
}
