#include <stdio.h>
#include <math.h>
int main()
{
    int  a, b, fen=1500;
    scanf("%d %d",&a,&b);
    fen=1500+a*5+b*5;
    if (1500<=fen&& fen<1600)
    printf("D");
    if(1600<=fen && fen<=1699)
    printf("C");
    if(1700<=fen && fen<=1799)
    printf("B");
    if(fen>=1800)
    printf("A");
    return 0;
}
