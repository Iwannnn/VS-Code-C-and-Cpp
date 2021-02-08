#include<math.h>
#include<stdio.h>
int main()
{
    float f, c;
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32.0);
    printf("fahr=%.3f,celsius=%.3f\n",f,c);
    return 0;
}